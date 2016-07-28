#include "a10shihao.h"
#include "ui_a10shihao.h"

A10shihao::A10shihao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::A10shihao)
{
    ui->setupUi(this);
}

A10shihao::~A10shihao()
{
    delete ui;
}
