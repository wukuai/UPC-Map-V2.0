#include "a14shisihao.h"
#include "ui_a14shisihao.h"

a14shisihao::a14shisihao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a14shisihao)
{
    ui->setupUi(this);
}

a14shisihao::~a14shisihao()
{
    delete ui;
}
