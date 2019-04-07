/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtGui>
#include "addressbook.h"

AddressBook::AddressBook(QWidget *parent)
    : QWidget(parent)
{
    QLabel *nameLabel = new QLabel(tr("Name:"));            // section label
    nameLine = new QLineEdit;
    nameLine->setReadOnly(true);                            // so that we can only display but not edit existing contact details

    QLabel *addressLabel = new QLabel(tr("Address:"));      // section label
    addressText = new QTextEdit;
    addressText->setReadOnly(true);                         // so that we can only display but not edit existing contact details

    addButton = new QPushButton(tr("&Add"));                // initialize our buttons
                                                            // start visible
    editButton = new QPushButton(tr("&Edit"));              // initialize edit button
    editButton->setEnabled(false);                          // set disable
    removeButton = new QPushButton(tr("&Remove"));          // initialzse remove button
    removeButton->setEnabled(false);                        // set disable
//! [instantiating findButton]
    findButton = new QPushButton(tr("&Find"));              // initialize find button
    findButton->setEnabled(false);                          // set disable
//! [instantiating findButton]
    submitButton = new QPushButton(tr("&Submit"));          // initialize submit buttons
    submitButton->hide();                                   // start hidden
    cancelButton = new QPushButton(tr("&Cancel"));          // initialize cancel buttons
    cancelButton->hide();                                   // start hidden

    nextButton = new QPushButton(tr("&Next"));              // initialize next button
    nextButton->setEnabled(false);                          // disable by default
    previousButton = new QPushButton(tr("&Previous"));      // initialize previous button
    previousButton->setEnabled(false);                      // disable by default

//! [instantiating FindDialog]
    dialog = new FindDialog;                                // instantiate our private object (findbutton/finddialog)
//! [instantiating FindDialog]

    connect(addButton, SIGNAL(clicked()), this, SLOT(addContact()));        // click is for this button
    connect(submitButton, SIGNAL(clicked()), this, SLOT(submitContact()));  // click is for this button
    connect(editButton, SIGNAL(clicked()), this, SLOT(editContact()));      // click is for this button
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancel()));         // click is for this button
    connect(removeButton, SIGNAL(clicked()), this, SLOT(removeContact()));  // click is for this button
//! [signals and slots for find]    
    connect(findButton, SIGNAL(clicked()), this, SLOT(findContact()));      // connect clicked() SIGNAL to findContact()
//! [signals and slots for find]        
    connect(nextButton, SIGNAL(clicked()), this, SLOT(next()));             // click is for this button
    connect(previousButton, SIGNAL(clicked()), this, SLOT(previous()));     // click is for this button
    
    QVBoxLayout *buttonLayout1 = new QVBoxLayout;           // button layout vertical
    buttonLayout1->addWidget(addButton);                    // add addbutton to the layout
    buttonLayout1->addWidget(editButton);                   // add editbutton to the layout
    buttonLayout1->addWidget(removeButton);                 // add removebutton to the layout
//! [adding findButton to layout]        
    buttonLayout1->addWidget(findButton);                   // add findbutton to the layout
//! [adding findButton to layout]            
    buttonLayout1->addWidget(submitButton);                 // add submitbutton to the layout
    buttonLayout1->addWidget(cancelButton);                 // add cancelbutton to the layout
    buttonLayout1->addStretch();                            // used to keep the buttons together and not spread apart

    QHBoxLayout *buttonLayout2 = new QHBoxLayout;           // using QHBoxLayout to place buttons
    buttonLayout2->addWidget(previousButton);               // put them side by side
    buttonLayout2->addWidget(nextButton);                   // put them side by side

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(nameLabel, 0, 0);                 // postion info for name
    mainLayout->addWidget(nameLine, 0, 1);                  // postion info for nameline
    mainLayout->addWidget(addressLabel, 1, 0, Qt::AlignTop);// postion info for addresslabel
    mainLayout->addWidget(addressText, 1, 1);               // postion info for addresstext
    mainLayout->addLayout(buttonLayout1, 1, 2);             // button positions right side bottom
    mainLayout->addLayout(buttonLayout2, 2, 1);             // postion info for buttonlayout2

    setLayout(mainLayout);
    setWindowTitle(tr("Simple Address Book"));              // Title of program (titlebar)
}

void AddressBook::addContact()
{
    oldName = nameLine->text();                             // store last entered name in oldname
    oldAddress = addressText->toPlainText();                // store last entered address in oldaddress

    nameLine->clear();                                      // clear the input field
    addressText->clear();                                   // clear the input field

    updateInterface(AddingMode);
}

void AddressBook::editContact()
{
    oldName = nameLine->text();
    oldAddress = addressText->toPlainText();

    updateInterface(EditingMode);
}

void AddressBook::submitContact()
{
    QString name = nameLine->text();                        // grab detail and put into QString name
    QString address = addressText->toPlainText();           // grab detail and put into QString address

    if (name == "" || address == "") {                      // check if the name and address fields empty
        QMessageBox::information(this, tr("Empty Field"),   // if it is bug the user
            tr("Please enter a name and address."));
    }

    if (currentMode == AddingMode) {                        // if we are in ADDINGMODE procede, or skip to else line 157?
        
        if (!contacts.contains(name)) {                     // add contact if its not in your contacts, or error out....
            contacts.insert(name, address);
            QMessageBox::information(this, tr("Add Successful"),        // ADD
                tr("\"%1\" has been added to your address book.").arg(name)); // this looks like C code??
        } else {
            QMessageBox::information(this, tr("Add Unsuccessful"),      // ERROR
                tr("Sorry, \"%1\" is already in your address book.").arg(name)); // this looks like C code??
        }
    } else if (currentMode == EditingMode) {                // if we are ing EDITINGMODE procede
        
        if (oldName != name) {                              // compare oldName with name
            if (!contacts.contains(name)) {
                QMessageBox::information(this, tr("Edit Successful"),   // if changed remove old contance and insert new one
                    tr("\"%1\" has been edited in your address book.").arg(oldName));
                contacts.remove(oldName);
                contacts.insert(name, address);
            } else {
                QMessageBox::information(this, tr("Edit Unsuccessful"),
                    tr("Sorry, \"%1\" is already in your address book.").arg(name));
            }
        } else if (oldAddress != address) {                 // if only address changed update contacts address
            QMessageBox::information(this, tr("Edit Successful"),
                tr("\"%1\" has been edited in your address book.").arg(name));
            contacts[name] = address;
        }
    }

    updateInterface(NavigationMode);                        // set currentMode to NavigationMode.  Re-enables the push button
}

void AddressBook::cancel()
{
    nameLine->setText(oldName);                             // display last name
    addressText->setText(oldAddress);                       // display last address
    updateInterface(NavigationMode);                        // change to NavigationMode
}

void AddressBook::removeContact()                           // to remove contact from address book, use removeContact()
{
    QString name = nameLine->text();                        // is the name in nameLine
    QString address = addressText->toPlainText();           // is the address in addressText

    if (contacts.contains(name)) {

        int button = QMessageBox::question(this,            // if contact is there display the confirm popup box
            tr("Confirm Remove"),
            tr("Are you sure you want to remove \"%1\"?").arg(name),
            QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {                   // if the user says yes call previous
            
            previous();                                     // to show a different contact
            contacts.remove(name);                          // remove the contact using QMap's remove() function

            QMessageBox::information(this, tr("Remove Successful"), // display a popup box to show the user
                tr("\"%1\" has been removed from your address book.").arg(name));
        }
    }

    updateInterface(NavigationMode);
}

void AddressBook::next()                                    // AddressBook Class Navigation
{
    QString name = nameLine->text();                        // TRACKING THE ITERATOR
    QMap<QString, QString>::iterator i = contacts.find(name);

    if (i != contacts.end())                                // TRACKING THE ITERATOR
        i++;

    if (i == contacts.end())                                // TRACKING THE ITERATOR
        i = contacts.begin();                               // TRACKING THE ITERATOR

    nameLine->setText(i.key());
    addressText->setText(i.value());
}

void AddressBook::previous()                                // AddressBook Class Navigation
{
    QString name = nameLine->text();                        // TRACKING THE ITERATOR
    QMap<QString, QString>::iterator i = contacts.find(name);

    if (i == contacts.end()) {                              // if iterator is at the end
        nameLine->clear();                                  // clear nameline
        addressText->clear();                               // clear nameline
        return;                                             // return ((return what i dont know maybe just move ont to next section))
    }

    if (i == contacts.begin())                              // if the iterator is at the end of contacts
        i = contacts.end();                                 // move to the end

    i--;                                                    // decrement by one
    nameLine->setText(i.key());                             // display contents of nameLine
    addressText->setText(i.value());                        // display contents of addressText
}
//! [findContact() function] 
void AddressBook::findContact()
{
    dialog->show();                                         // show the finddialog instance

    if (dialog->exec() == QDialog::Accepted) {              // user clikc button, diag hidden result code set to qdialog::accepted
        QString contactName = dialog->getFindText();        // contactname = your search find it using getfindtext

        if (contacts.contains(contactName)) {               // if your search exists display it immediately
            nameLine->setText(contactName);
            addressText->setText(contacts.value(contactName));
        } else {                                            // else error out and post a message
            QMessageBox::information(this, tr("Contact Not Found"),
                tr("Sorry, \"%1\" is not in your address book.").arg(contactName));
            return;
        }
    }

    updateInterface(NavigationMode);
}
//! [findContact() function] 

void AddressBook::updateInterface(Mode mode)                // the function updates the current mode according to the "mode" argument
{                                                           // passed to it, assigning it to "currentMode" before checking its value
    currentMode = mode;

    switch (currentMode) {

    case AddingMode:                                        // should set values for this mode
    case EditingMode:                                       // should set values for this mode

        nameLine->setReadOnly(false);                       // Nameline field writable
        nameLine->setFocus(Qt::OtherFocusReason);           // ????? is this where your cursor is at
        addressText->setReadOnly(false);                    // Address field writable

        addButton->setEnabled(false);                       // disable addbutton
        editButton->setEnabled(false);                      // disable edit button
        removeButton->setEnabled(false);                    // disable remove button

        nextButton->setEnabled(false);                      // disable next button
        previousButton->setEnabled(false);                  // disable previous button

        submitButton->show();                               // enable submit button
        cancelButton->show();                               // enable cancel button
        break;

    case NavigationMode:
        
        if (contacts.isEmpty()) {                           // dont understand this
            nameLine->clear();                              // if nameline is empty clear it???
            addressText->clear();                           // if addresstext is empty clear it??
        }

        nameLine->setReadOnly(true);                        // enable nameline
        addressText->setReadOnly(true);                     // enable addresstext
        addButton->setEnabled(true);                        // enable addbutton

        int number = contacts.size();                       // set number to contact.size (how many are in your list)
        editButton->setEnabled(number >= 1);                // enable if greater than or equal to 1
        removeButton->setEnabled(number >= 1);              // enable if greater than or equal to 1
        findButton->setEnabled(number > 2);                 // enable if greater than 2
        nextButton->setEnabled(number > 1);                 // enable if greater than 1
        previousButton->setEnabled(number > 1);             // enable if greater than 1

        submitButton->hide();                               // disable submit button
        cancelButton->hide();                               // disable cancel button
        break;
    }
}
