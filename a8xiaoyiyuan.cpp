#include "a8xiaoyiyuan.h"
#include "ui_a8xiaoyiyuan.h"

A8xiaoyiyuan::A8xiaoyiyuan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::A8xiaoyiyuan)
{
    ui->setupUi(this);
}

A8xiaoyiyuan::~A8xiaoyiyuan()
{
    delete ui;
}
