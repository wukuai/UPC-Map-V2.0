#include "a29jiuhao.h"
#include "ui_a29jiuhao.h"

a29jiuhao::a29jiuhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a29jiuhao)
{
    ui->setupUi(this);
}

a29jiuhao::~a29jiuhao()
{
    delete ui;
}
