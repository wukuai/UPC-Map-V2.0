#include "a25wuhao.h"
#include "ui_a25wuhao.h"

a25wuhao::a25wuhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a25wuhao)
{
    ui->setupUi(this);
}

a25wuhao::~a25wuhao()
{
    delete ui;
}
