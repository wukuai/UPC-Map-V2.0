#include "a6guoji.h"
#include "ui_a6guoji.h"

A6guoji::A6guoji(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::A6guoji)
{
    ui->setupUi(this);
}

A6guoji::~A6guoji()
{
    delete ui;
}
