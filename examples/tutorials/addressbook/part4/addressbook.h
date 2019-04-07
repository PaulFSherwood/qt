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
class QPushButton;
class QLabel;
class QLineEdit;
class QTextEdit;
QT_END_NAMESPACE

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = 0);
//! [Mode enum]     // ENUM ((Enumerated type for abstract data (like list of data)
    enum Mode { NavigationMode, AddingMode, EditingMode };  // using to change modes ((nav,add,edit))
//! [Mode enum]     // Enumerations create new data types to contain something different that is not
                    // limited to the values fundamental data types may take
public slots:
    void addContact();
    void submitContact();
    void cancel();
//! [edit and remove slots]
    void editContact();                     // two new public slots
    void removeContact();                   // two new public slots
//! [edit and remove slots]
    void next();
    void previous();

private:
//! [updateInterface() declaration]
    void updateInterface(Mode mode);        // used in order to switch between modes
//! [updateInterface() declaration]
    QPushButton *addButton;                 // add addbutton
//! [buttons declaration]    
    QPushButton *editButton;                // adding two buttons
    QPushButton *removeButton;              // adding two buttons
//! [buttons declaration]
    QPushButton *submitButton;              // add submit button
    QPushButton *cancelButton;              // add cancel button
    QPushButton *nextButton;                // add next button
    QPushButton *previousButton;            // add previous button
    QLineEdit *nameLine;                    // add line for names input
    QTextEdit *addressText;                 // add line for address input

    QMap<QString, QString> contacts;
    QString oldName;                        // holding place for names
    QString oldAddress;                     // holding place for addresses
//! [mode declaration]    
    Mode currentMode;                       // used to track enum's current mode
//! [mode declaration]    
};

#endif
