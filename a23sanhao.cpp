#include "a23sanhao.h"
#include "ui_a23sanhao.h"

a23sanhao::a23sanhao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a23sanhao)
{
    ui->setupUi(this);
}

a23sanhao::~a23sanhao()
{
    delete ui;
}
