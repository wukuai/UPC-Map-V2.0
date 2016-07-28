#include "a17shiqihao.h"
#include "ui_a17shiqihao.h"

a17shiqihao::a17shiqihao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a17shiqihao)
{
    ui->setupUi(this);
}

a17shiqihao::~a17shiqihao()
{
    delete ui;
}
