#include "a22erhao.h"
#include "ui_a22erhao.h"

a22erhao::a22erhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a22erhao)
{
    ui->setupUi(this);
}

a22erhao::~a22erhao()
{
    delete ui;
}
