/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 19 19:01:41 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *actionE_dit;
    QAction *action_Save;
    QAction *actionSave_As;
    QAction *actionE_xit;
    QAction *action_New;
    QAction *actionUndo_Ctrl_Z;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDel;
    QAction *actionView_Help;
    QAction *actionAbout_Notepad;
    QAction *actionPage_Setup;
    QAction *actionPrint_Ctrl_P;
    QAction *actionFind_Ctrl_F;
    QAction *actionFind_Next_F3;
    QAction *actionReplace_Ctrl_H;
    QAction *actionGo_To_Ctrl_A;
    QAction *actionSelect_All_Ctrl_A;
    QAction *actionTime_Date_F5;
    QAction *actionStatus_Bar;
    QAction *actionHelp;
    QAction *actionAbout_Notepad_2;
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QMenuBar *menuBar;
    QMenu *menuSome_text;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuHelp_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 391);
        MainWindow->setMinimumSize(QSize(600, 391));
        MainWindow->setMaximumSize(QSize(600, 391));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        actionE_dit = new QAction(MainWindow);
        actionE_dit->setObjectName(QString::fromUtf8("actionE_dit"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QString::fromUtf8("action_New"));
        actionUndo_Ctrl_Z = new QAction(MainWindow);
        actionUndo_Ctrl_Z->setObjectName(QString::fromUtf8("actionUndo_Ctrl_Z"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDel = new QAction(MainWindow);
        actionDel->setObjectName(QString::fromUtf8("actionDel"));
        actionView_Help = new QAction(MainWindow);
        actionView_Help->setObjectName(QString::fromUtf8("actionView_Help"));
        actionAbout_Notepad = new QAction(MainWindow);
        actionAbout_Notepad->setObjectName(QString::fromUtf8("actionAbout_Notepad"));
        actionPage_Setup = new QAction(MainWindow);
        actionPage_Setup->setObjectName(QString::fromUtf8("actionPage_Setup"));
        actionPrint_Ctrl_P = new QAction(MainWindow);
        actionPrint_Ctrl_P->setObjectName(QString::fromUtf8("actionPrint_Ctrl_P"));
        actionFind_Ctrl_F = new QAction(MainWindow);
        actionFind_Ctrl_F->setObjectName(QString::fromUtf8("actionFind_Ctrl_F"));
        actionFind_Next_F3 = new QAction(MainWindow);
        actionFind_Next_F3->setObjectName(QString::fromUtf8("actionFind_Next_F3"));
        actionReplace_Ctrl_H = new QAction(MainWindow);
        actionReplace_Ctrl_H->setObjectName(QString::fromUtf8("actionReplace_Ctrl_H"));
        actionGo_To_Ctrl_A = new QAction(MainWindow);
        actionGo_To_Ctrl_A->setObjectName(QString::fromUtf8("actionGo_To_Ctrl_A"));
        actionSelect_All_Ctrl_A = new QAction(MainWindow);
        actionSelect_All_Ctrl_A->setObjectName(QString::fromUtf8("actionSelect_All_Ctrl_A"));
        actionTime_Date_F5 = new QAction(MainWindow);
        actionTime_Date_F5->setObjectName(QString::fromUtf8("actionTime_Date_F5"));
        actionStatus_Bar = new QAction(MainWindow);
        actionStatus_Bar->setObjectName(QString::fromUtf8("actionStatus_Bar"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout_Notepad_2 = new QAction(MainWindow);
        actionAbout_Notepad_2->setObjectName(QString::fromUtf8("actionAbout_Notepad_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 0, 281, 341));
        plainTextEdit->setStyleSheet(QString::fromUtf8(""));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(300, 0, 291, 81));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 270, 51, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 310, 51, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(480, 310, 51, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(540, 270, 51, 71));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(300, 310, 111, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 230, 51, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(300, 230, 51, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(360, 230, 51, 31));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(300, 270, 51, 31));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(360, 270, 51, 31));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(420, 270, 51, 31));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(480, 230, 51, 31));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(540, 230, 51, 31));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(300, 190, 51, 31));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(360, 190, 51, 31));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(420, 190, 51, 31));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(480, 190, 51, 31));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(540, 190, 51, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        menuSome_text = new QMenu(menuBar);
        menuSome_text->setObjectName(QString::fromUtf8("menuSome_text"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp_2 = new QMenu(menuBar);
        menuHelp_2->setObjectName(QString::fromUtf8("menuHelp_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSome_text->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp_2->menuAction());
        menuSome_text->addAction(action_New);
        menuSome_text->addAction(action_Open);
        menuSome_text->addAction(action_Save);
        menuSome_text->addAction(actionSave_As);
        menuSome_text->addSeparator();
        menuSome_text->addAction(actionPage_Setup);
        menuSome_text->addAction(actionPrint_Ctrl_P);
        menuSome_text->addSeparator();
        menuSome_text->addAction(actionE_xit);
        menuEdit->addAction(actionUndo_Ctrl_Z);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDel);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind_Ctrl_F);
        menuEdit->addAction(actionFind_Next_F3);
        menuEdit->addAction(actionReplace_Ctrl_H);
        menuEdit->addAction(actionGo_To_Ctrl_A);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All_Ctrl_A);
        menuEdit->addAction(actionTime_Date_F5);
        menuHelp->addAction(actionView_Help);
        menuHelp->addAction(actionAbout_Notepad);
        menuView->addAction(actionStatus_Bar);
        menuHelp_2->addAction(actionHelp);
        menuHelp_2->addSeparator();
        menuHelp_2->addAction(actionAbout_Notepad_2);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_4, SIGNAL(clicked()), lcdNumber, SLOT(setDecMode()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionE_dit->setText(QApplication::translate("MainWindow", "E&dit", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save &As", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        action_New->setText(QApplication::translate("MainWindow", "&New", 0, QApplication::UnicodeUTF8));
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionUndo_Ctrl_Z->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionUndo_Ctrl_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionDel->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionView_Help->setText(QApplication::translate("MainWindow", "Word Wrap", 0, QApplication::UnicodeUTF8));
        actionAbout_Notepad->setText(QApplication::translate("MainWindow", "Font...", 0, QApplication::UnicodeUTF8));
        actionPage_Setup->setText(QApplication::translate("MainWindow", "Page Setup...", 0, QApplication::UnicodeUTF8));
        actionPrint_Ctrl_P->setText(QApplication::translate("MainWindow", "Print...", 0, QApplication::UnicodeUTF8));
        actionPrint_Ctrl_P->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionFind_Ctrl_F->setText(QApplication::translate("MainWindow", "Find...", 0, QApplication::UnicodeUTF8));
        actionFind_Ctrl_F->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionFind_Next_F3->setText(QApplication::translate("MainWindow", "Find Next", 0, QApplication::UnicodeUTF8));
        actionFind_Next_F3->setShortcut(QApplication::translate("MainWindow", "F3", 0, QApplication::UnicodeUTF8));
        actionReplace_Ctrl_H->setText(QApplication::translate("MainWindow", "Replace...", 0, QApplication::UnicodeUTF8));
        actionReplace_Ctrl_H->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionGo_To_Ctrl_A->setText(QApplication::translate("MainWindow", "Go To...", 0, QApplication::UnicodeUTF8));
        actionGo_To_Ctrl_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionSelect_All_Ctrl_A->setText(QApplication::translate("MainWindow", "Select All", 0, QApplication::UnicodeUTF8));
        actionSelect_All_Ctrl_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionTime_Date_F5->setText(QApplication::translate("MainWindow", "Time/Date", 0, QApplication::UnicodeUTF8));
        actionTime_Date_F5->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionStatus_Bar->setText(QApplication::translate("MainWindow", "Status Bar", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("MainWindow", "View Help", 0, QApplication::UnicodeUTF8));
        actionAbout_Notepad_2->setText(QApplication::translate("MainWindow", "About Notepad", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", "+/-", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("MainWindow", "CE", 0, QApplication::UnicodeUTF8));
        menuSome_text->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Format", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuHelp_2->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
