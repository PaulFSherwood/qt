#include <QtGui/QApplication>       // Normal
#include "mainwindow.h"             // Normal

int main(int argc, char *argv[])    // Normal
{
    QApplication a(argc, argv);     // Normal ((QApplication app(argc, argv);
    MainWindow w;                   // ?????? ((CalculatorForm calculator;
    w.show();                       // Normal ((calculator.show();
    return a.exec();                // Normal
}
