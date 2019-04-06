#ifndef MAINWINDOW_H                    // Normal name of mainwindow.h or mainwindow.cpp in caps
#define MAINWINDOW_H                    // Normal name of mainwindow.h or mainwindow.cpp in caps

#include <QtGui/QMainWindow>            // Type of app i guess other was QWidget

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow   // class <<.cpp name>> : public <<line 4>>
{
    Q_OBJECT                            // Normal

public:                                 // Normal
    MainWindow(QWidget *parent = 0);    // <<cpp name>>(QWidget *parent = 0);
    ~MainWindow();                      // unknown use

private:                                // unknown use
    Ui::MainWindow *ui;                 // unknown use
};

#endif // MAINWINDOW_H
