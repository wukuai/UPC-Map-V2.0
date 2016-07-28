#include "a7huiyi.h"
#include "ui_a7huiyi.h"

A7huiyi::A7huiyi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::A7huiyi)
{
    ui->setupUi(this);
}

A7huiyi::~A7huiyi()
{
    delete ui;
}
