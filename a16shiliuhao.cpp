#include "a16shiliuhao.h"
#include "ui_a16shiliuhao.h"

a16shiliuhao::a16shiliuhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a16shiliuhao)
{
    ui->setupUi(this);
}

a16shiliuhao::~a16shiliuhao()
{
    delete ui;
}
