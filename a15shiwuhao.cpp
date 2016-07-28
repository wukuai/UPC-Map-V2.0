#include "a15shiwuhao.h"
#include "ui_a15shiwuhao.h"

a15shiwuhao::a15shiwuhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a15shiwuhao)
{
    ui->setupUi(this);
}

a15shiwuhao::~a15shiwuhao()
{
    delete ui;
}
