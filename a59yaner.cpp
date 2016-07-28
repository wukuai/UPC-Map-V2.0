#include "a59yaner.h"
#include "ui_a59yaner.h"

a59yaner::a59yaner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a59yaner)
{
    ui->setupUi(this);
}

a59yaner::~a59yaner()
{
    delete ui;
}
