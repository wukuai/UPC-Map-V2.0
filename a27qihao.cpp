#include "a27qihao.h"
#include "ui_a27qihao.h"

a27qihao::a27qihao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a27qihao)
{
    ui->setupUi(this);
}

a27qihao::~a27qihao()
{
    delete ui;
}
