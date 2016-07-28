#include "a11shyihao.h"
#include "ui_a11shyihao.h"

A11shyihao::A11shyihao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::A11shyihao)
{
    ui->setupUi(this);
}

A11shyihao::~A11shyihao()
{
    delete ui;
}
