#include "a24sihao.h"
#include "ui_a24sihao.h"

a24sihao::a24sihao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a24sihao)
{
    ui->setupUi(this);
}

a24sihao::~a24sihao()
{
    delete ui;
}
