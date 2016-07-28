#include "nanjiao.h"
#include "ui_nanjiao.h"

Nanjiao::Nanjiao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nanjiao)
{
    ui->setupUi(this);
}

Nanjiao::~Nanjiao()
{
    delete ui;
}
