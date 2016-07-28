#include "a28bahao.h"
#include "ui_a28bahao.h"

a28bahao::a28bahao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a28bahao)
{
    ui->setupUi(this);
}

a28bahao::~a28bahao()
{
    delete ui;
}
