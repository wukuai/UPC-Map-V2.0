#include "a60yanyi.h"
#include "ui_a60yanyi.h"

a60yanyi::a60yanyi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a60yanyi)
{
    ui->setupUi(this);
}

a60yanyi::~a60yanyi()
{
    delete ui;
}
