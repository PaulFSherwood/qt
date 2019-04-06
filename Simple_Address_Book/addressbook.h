#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QtGui/QMainWindow>

namespace Ui
{
    class addressbook;
}

class addressbook : public QMainWindow
{
    Q_OBJECT

public:
    addressbook(QWidget *parent = 0);
    ~addressbook();

private:
    Ui::addressbook *ui;
};

#endif // ADDRESSBOOK_H
