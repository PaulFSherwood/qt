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

#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QWidget>
#include <QMap>

QT_BEGIN_NAMESPACE
class QLabel;
class QLineEdit;
class QPushButton;
class QTextEdit;
QT_END_NAMESPACE

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = 0);

public slots:                           // a slot is a function that responds to a paticular signal
    void addContact();                  // adding a push button for contanct
    void submitContact();               // adding a push button for submit a contact
    void cancel();                      // cancel that you wrote i guess
//! [navigation functions]
    void next();                        // AddressBook Class Navigation
    void previous();                    // AddressBook Class Navigation
//! [navigation functions]    

private:
    QPushButton *addButton;             // new button for add
    QPushButton *submitButton;          // new button for submit
    QPushButton *cancelButton;          // new button for cancel
//! [navigation pushbuttons]    
    QPushButton *nextButton;            // required for button
    QPushButton *previousButton;        // required for button
//! [navigation pushbuttons]    
    QLineEdit *nameLine;                // old variable from last lesson
    QTextEdit *addressText;             // old variable from last lesson

    QMap<QString, QString> contacts;    // using QMap to hold key-value pair name(key) and address(value)
    QString oldName;                    // used to hold the name before add is clicked (cancel revert to last displayed)
    QString oldAddress;                 // used to hold address before add is clicked (cancel revert to last displayed)
};

#endif
