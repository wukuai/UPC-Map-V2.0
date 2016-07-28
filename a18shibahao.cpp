#include "a18shibahao.h"
#include "ui_a18shibahao.h"

a18shibahao::a18shibahao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a18shibahao)
{
    ui->setupUi(this);
}

a18shibahao::~a18shibahao()
{
    delete ui;
}
