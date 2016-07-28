#include "a58yansan.h"
#include "ui_a58yansan.h"

a58yansan::a58yansan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a58yansan)
{
    ui->setupUi(this);
}

a58yansan::~a58yansan()
{
    delete ui;
}
