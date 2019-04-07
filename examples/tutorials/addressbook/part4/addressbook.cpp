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
    QLabel *nameLabel = new QLabel(tr("Name:"));
    nameLine = new QLineEdit;
    nameLine->setReadOnly(true);                            // so that we can only display but not edit existing contact details

    QLabel *addressLabel = new QLabel(tr("Address:"));
    addressText = new QTextEdit;
    addressText->setReadOnly(true);                         // so that we can only display but not edit existing contact details

    addButton = new QPushButton(tr("&Add"));                // initialize our buttons
//! [edit and remove buttons]                               // start visible
    editButton = new QPushButton(tr("&Edit"));              // initialize edit button
    editButton->setEnabled(false);                          // set disable
    removeButton = new QPushButton(tr("&Remove"));          // initialzse remove button
    removeButton->setEnabled(false);                        // set disable
//! [edit and remove buttons] 
    submitButton = new QPushButton(tr("&Submit"));          // initialize our buttons
    submitButton->hide();                                   // start hidden
    cancelButton = new QPushButton(tr("&Cancel"));          // initialize our buttons
    cancelButton->hide();                                   // start hidden

    nextButton = new QPushButton(tr("&Next"));              // start button
    nextButton->setEnabled(false);                          // disable by default
    previousButton = new QPushButton(tr("&Previous"));      // start button
    previousButton->setEnabled(false);                      // disable by default

    connect(addButton, SIGNAL(clicked()), this, SLOT(addContact()));        // click is for this button
    connect(submitButton, SIGNAL(clicked()), this, SLOT(submitContact()));  // click is for this button
//! [connecting edit and remove] 
    connect(editButton, SIGNAL(clicked()), this, SLOT(editContact()));      // click is for this button
    connect(removeButton, SIGNAL(clicked()), this, SLOT(removeContact()));  // click is for this button
//! [connecting edit and remove] 
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancel()));         // click is for this button
    connect(nextButton, SIGNAL(clicked()), this, SLOT(next()));             // connect the button to the slot
    connect(previousButton, SIGNAL(clicked()), this, SLOT(previous()));     // connect the button to the slot

    QVBoxLayout *buttonLayout1 = new QVBoxLayout;           // button layout vertical
    buttonLayout1->addWidget(addButton);                    // add addbutton to the lay out
//! [adding edit and remove to the layout]     
    buttonLayout1->addWidget(editButton);                   // add editbutton to the lay out
    buttonLayout1->addWidget(removeButton);                 // add removebutton to the lay out
//! [adding edit and remove to the layout]
    buttonLayout1->addWidget(submitButton);                 // add submitbutton to the lay out
    buttonLayout1->addWidget(cancelButton);                 // add cancelbutton to the lay out
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
    mainLayout->addLayout(buttonLayout2, 3, 1);             // postion info for buttonlayout2

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
//! [editContact() function]
void AddressBook::editContact()
{
    oldName = nameLine->text();
    oldAddress = addressText->toPlainText();

    updateInterface(EditingMode);
}
//! [editContact() function]
//! [submitContact() function beginning]
void AddressBook::submitContact()
{
//! [submitContact() function beginning]
    QString name = nameLine->text();                        // grab detail and put into QString name
    QString address = addressText->toPlainText();           // grab detail and put into QString address

    if (name == "" || address == "") {                      // check if the name and address fields empty
        QMessageBox::information(this, tr("Empty Field"),   // if it is bug the user
            tr("Please enter a name and address."));
    }
//! [submitContact() function part1]
    if (currentMode == AddingMode) {                        // if we are in ADDINGMODE procede, or skip to else line 152?
        
        if (!contacts.contains(name)) {                     // add contact if its not in your contacts, or error out....
            contacts.insert(name, address);
            QMessageBox::information(this, tr("Add Successful"),        // ADD
                tr("\"%1\" has been added to your address book.").arg(name)); // this looks like C code??
        } else {
            QMessageBox::information(this, tr("Add Unsuccessful"),      // ERROR
                tr("Sorry, \"%1\" is already in your address book.").arg(name)); // this looks like C code??
        }
//! [submitContact() function part1]
//! [submitContact() function part2]
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
//! [submitContact() function part2]

void AddressBook::cancel()
{
    nameLine->setText(oldName);                             // display last name
    addressText->setText(oldAddress);                       // display last address
    updateInterface(NavigationMode);
}
//! [removeContact() function]
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
//! [removeContact() function]
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

    if (i == contacts.end()) {                              // if ierator is at the end
        nameLine->clear();                                  // clear nameline
        addressText->clear();                               // clear nameline
        return;                                             // return ((return what i dont know maybe just move ont to next section))
    }                                                       // or return the previous contact???

    if (i == contacts.begin())                              // if the iterator is at the end of contacts
        i = contacts.end();                                 // move to the end

    i--;                                                    // decrement by one
    nameLine->setText(i.key());                             // display contents of nameLine
    addressText->setText(i.value());                        // display contents of addressText
}
//! [update interface() part 1]
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
//! [update interface() part 1]
//! [update interface() part 2]
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
        nextButton->setEnabled(number > 1);                 // enable if greater than 1
        previousButton->setEnabled(number >1 );             // enable if greater than 1

        submitButton->hide();                               // disable submit button
        cancelButton->hide();                               // disable cancel button
        break;
    }
}
//! [update interface() part 2]
