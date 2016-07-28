#include "a13shisanhao.h"
#include "ui_a13shisanhao.h"

a13shisanhao::a13shisanhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a13shisanhao)
{
    ui->setupUi(this);
}

a13shisanhao::~a13shisanhao()
{
    delete ui;
}
