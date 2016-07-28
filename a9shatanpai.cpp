#include "a9shatanpai.h"
#include "ui_a9shatanpai.h"

A9shatanpai::A9shatanpai(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::A9shatanpai)
{
    ui->setupUi(this);
}

A9shatanpai::~A9shatanpai()
{
    delete ui;
}
