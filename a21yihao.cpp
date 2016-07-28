#include "a21yihao.h"
#include "ui_a21yihao.h"

a21yihao::a21yihao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a21yihao)
{
    ui->setupUi(this);
}

a21yihao::~a21yihao()
{
    delete ui;
}
