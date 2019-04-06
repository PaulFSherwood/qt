/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionEdit;
    QAction *actionRemove;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *ListPage;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QWidget *detailsPage;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_4;
    QLabel *label_3;
    QPlainTextEdit *addressEdit;
    QPlainTextEdit *phoneNumbersEdit;
    QDateEdit *birthdayEdit;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QMenuBar *menuBar;
    QMenu *menuEntries;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(432, 483);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        ListPage = new QWidget();
        ListPage->setObjectName(QStringLiteral("ListPage"));
        gridLayout_2 = new QGridLayout(ListPage);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(ListPage);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(ListPage);
        detailsPage = new QWidget();
        detailsPage->setObjectName(QStringLiteral("detailsPage"));
        gridLayout_3 = new QGridLayout(detailsPage);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(detailsPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(detailsPage);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout_3->addWidget(nameEdit, 0, 1, 1, 1);

        label_4 = new QLabel(detailsPage);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(detailsPage);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        addressEdit = new QPlainTextEdit(detailsPage);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        gridLayout_3->addWidget(addressEdit, 2, 1, 1, 1);

        phoneNumbersEdit = new QPlainTextEdit(detailsPage);
        phoneNumbersEdit->setObjectName(QStringLiteral("phoneNumbersEdit"));

        gridLayout_3->addWidget(phoneNumbersEdit, 3, 1, 1, 1);

        birthdayEdit = new QDateEdit(detailsPage);
        birthdayEdit->setObjectName(QStringLiteral("birthdayEdit"));

        gridLayout_3->addWidget(birthdayEdit, 1, 1, 1, 1);

        label = new QLabel(detailsPage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(detailsPage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        gridLayout_3->addWidget(buttonBox, 4, 1, 1, 1);

        stackedWidget->addWidget(detailsPage);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 432, 20));
        menuEntries = new QMenu(menuBar);
        menuEntries->setObjectName(QStringLiteral("menuEntries"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuEntries->menuAction());
        menuEntries->addAction(actionAdd);
        menuEntries->addAction(actionEdit);
        menuEntries->addAction(actionRemove);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        actionRemove->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Birthday:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Phone Number:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Address:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        menuEntries->setTitle(QApplication::translate("MainWindow", "Entries", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
