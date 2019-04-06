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

//! [0]
#include <QtUiTools>    // to allow standalone apps to create user interfaces at run-time
//! [0]
#include <QtGui>

#include "calculatorform.h"

//! [1]
CalculatorForm::CalculatorForm(QWidget *parent)
    : QWidget(parent)
{
    QUiLoader loader;

    QFile file(":/forms/calculatorform.ui");    // QFile provides an interface for reading & writing to files
    file.open(QFile::ReadOnly); // used to read and write files (or resources?)
    QWidget *formWidget = loader.load(&file, this); // to load CalculatorForm.ui???
    file.close();   // It looks like this is for window position size and what not however
//! [1]             // nothing appears to change

//! [2]
    ui_inputSpinBox1 = qFindChild<QSpinBox*>(this, "inputSpinBox1");    // 3 widgets to generate UI
    ui_inputSpinBox2 = qFindChild<QSpinBox*>(this, "inputSpinBox2");    // 3 widgets to generate UI
    ui_outputWidget = qFindChild<QLabel*>(this, "outputWidget");        // 3 widgets to generate UI
//! [2]

//! [3]
    QMetaObject::connectSlotsByName(this);  // Use QMetaObject to connect specially named slots to Calc form
//! [3]

//! [4]
    QVBoxLayout *layout = new QVBoxLayout;  // Form widge is added to layout
    layout->addWidget(formWidget);
    setLayout(layout);

    setWindowTitle(tr("Calculator Builder"));   // Set the Window Title
}
//! [4]

//! [5]
void CalculatorForm::on_inputSpinBox1_valueChanged(int value)   // Look at the input modify value
{                                   // read value from spinboxes write  result to output via pointers
    ui_outputWidget->setText(QString::number(value + ui_inputSpinBox2->value()));   // Get value add
}                                                   // -> access variable in a pointer to a structure
//! [5] //! [6]

//! [6] //! [7]
void CalculatorForm::on_inputSpinBox2_valueChanged(int value)   // Look at the input modify value
{                                   // read value from spinboxes write  result to output via pointers
    ui_outputWidget->setText(QString::number(value + ui_inputSpinBox1->value()));   // Get value add
}                                                   // -> access variable in a pointer to a structure
//! [7]
/*
//! [8]
void CalculatorForm::on_inputSpinBox1_valueChanged(int value)   // Look at the input modify value
{                                   // read value from spinboxes write  result to output via pointers
    ui_outputWidget->setText(QString::number(value * ui_inputSpinBox2->value()));   // Get value add
}                                                   // -> access variable in a pointer to a structure
//! [8] //! [9]

//! [9] //! [10]
void CalculatorForm::on_inputSpinBox2_valueChanged(int value)   // Look at the input modify value
{                                   // read value from spinboxes write  result to output via pointers
    ui_outputWidget->setText(QString::number(value * ui_inputSpinBox1->value()));   // Get value add
}                                                   // -> access variable in a pointer to a structure
//! [10]
*/
