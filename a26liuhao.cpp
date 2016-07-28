#include "a26liuhao.h"
#include "ui_a26liuhao.h"

a26liuhao::a26liuhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a26liuhao)
{
    ui->setupUi(this);
}

a26liuhao::~a26liuhao()
{
    delete ui;
}
