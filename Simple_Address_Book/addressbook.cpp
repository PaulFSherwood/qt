#include "addressbook.h"
#include "ui_addressbook.h"

addressbook::addressbook(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::addressbook)
{
    ui->setupUi(this);
}

addressbook::~addressbook()
{
    delete ui;
}
