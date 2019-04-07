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
//! [setting readonly 1]
    nameLine->setReadOnly(true);        // so that we can only display but not edit existing contact details
//! [setting readonly 1]
    QLabel *addressLabel = new QLabel(tr("Address:"));
    addressText = new QTextEdit;
//! [setting readonly 2]    
    addressText->setReadOnly(true);     // so that we can only display but not edit existing contact details
//! [setting readonly 2]
   
//! [pushbutton declaration]
    addButton = new QPushButton(tr("&Add"));        // initialize our buttons
    addButton->show();                              // start visible
    submitButton = new QPushButton(tr("&Submit"));  // initialize our buttons
    submitButton->hide();                           // start hidden
    cancelButton = new QPushButton(tr("&Cancel"));  // initialize our buttons
    cancelButton->hide();                           // start hidden
//! [pushbutton declaration]

//! [connecting signals and slots]
    connect(addButton, SIGNAL(clicked()), this, SLOT(addContact()));        // click is for this button
    connect(submitButton, SIGNAL(clicked()), this, SLOT(submitContact()));  // click is for this button
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancel()));         // click is for this button
//! [connecting signals and slots]

//! [vertical layout]
    QVBoxLayout *buttonLayout1 = new QVBoxLayout;       // button layout vertical
    buttonLayout1->addWidget(addButton, Qt::AlignTop);  // same
    buttonLayout1->addWidget(submitButton);             // same
    buttonLayout1->addWidget(cancelButton);             // same
    buttonLayout1->addStretch();                        // used to keep the buttons together and not spread apart
//! [vertical layout]

//! [grid layout]
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(nameLabel, 0, 0);
    mainLayout->addWidget(nameLine, 0, 1);
    mainLayout->addWidget(addressLabel, 1, 0, Qt::AlignTop);
    mainLayout->addWidget(addressText, 1, 1);
    mainLayout->addLayout(buttonLayout1, 1, 2);         // button positions right side bottom
//! [grid layout]
    setLayout(mainLayout);
    setWindowTitle(tr("Simple Address Book"));
}
//! [addContact]
void AddressBook::addContact()
{
    oldName = nameLine->text();                 // store last entered name in oldname
    oldAddress = addressText->toPlainText();    // store last entered address in oldaddress

    nameLine->clear();                          // clear the input field
    addressText->clear();                       // clear the input field
    
    nameLine->setReadOnly(false);               // turn off the read-only mode
    nameLine->setFocus(Qt::OtherFocusReason);   // dont know what focus is for i guess watch for inptu???
    addressText->setReadOnly(false);            // turn off the read-only mode

    addButton->setEnabled(false);
    submitButton->show();                       // show the submit button
    cancelButton->show();                       // show the cancel button
}
//! [addContact]

//! [submitContact part1]
void AddressBook::submitContact()
{
    QString name = nameLine->text();            // grab detail and put into QString name
    QString address = addressText->toPlainText();// grab detail and put into QString address
    
    if (name == "" || address == "") {          // check if the name and address fields empty
        QMessageBox::information(this, tr("Empty Field"), // if it is bug the user
            tr("Please enter a name and address."));
        return;
    }
//! [submitContact part1]

//! [submitContact part2]
    if (!contacts.contains(name)) {             // is the contact in your address book if not add if it is error out....
        contacts.insert(name, address);
        QMessageBox::information(this, tr("Add Successful"),        // ADD
            tr("\"%1\" has been added to your address book.").arg(name));
    } else {
        QMessageBox::information(this, tr("Add Unsuccessful"),      // ERROR
            tr("Sorry, \"%1\" is already in your address book.").arg(name)); // this looks like C code??
        return;
    }
//! [submitContact part2]

//! [submitContact part3]
    if (contacts.isEmpty()) {               // restore the buttons to thier normal state
        nameLine->clear();                  // restore the buttons to thier normal state
        addressText->clear();               // restore the buttons to thier normal state
    }

    nameLine->setReadOnly(true);            // dont edit
    addressText->setReadOnly(true);         // dont edit
    addButton->setEnabled(true);            // dont edit
    submitButton->hide();                   // restore the buttons to thier normal state
    cancelButton->hide();                   // restore the buttons to thier normal state
}
//! [submitContact part3]

//! [cancel]
void AddressBook::cancel()
{
    nameLine->setText(oldName);             // display last name
    nameLine->setReadOnly(true);            // dont edit

    addressText->setText(oldAddress);       // display last address
    addressText->setReadOnly(true);         // dont edit

    addButton->setEnabled(true);            // dont edit
    submitButton->hide();                   // restore the buttons to thier normal state
    cancelButton->hide();                   // restore the buttons to thier normal state
}
//! [cancel]
