#include "a19shijiuhao.h"
#include "ui_a19shijiuhao.h"

a19shijiuhao::a19shijiuhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a19shijiuhao)
{
    ui->setupUi(this);
}

a19shijiuhao::~a19shijiuhao()
{
    delete ui;
}
