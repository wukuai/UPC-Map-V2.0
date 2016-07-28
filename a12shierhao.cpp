#include "a12shierhao.h"
#include "ui_a12shierhao.h"

a12shierhao::a12shierhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a12shierhao)
{
    ui->setupUi(this);
}

a12shierhao::~a12shierhao()
{
    delete ui;
}
