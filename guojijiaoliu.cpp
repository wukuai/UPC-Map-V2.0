#include "guojijiaoliu.h"
#include "ui_guojijiaoliu.h"

Guojijiaoliu::Guojijiaoliu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Guojijiaoliu)
{
    ui->setupUi(this);
}

Guojijiaoliu::~Guojijiaoliu()
{
    delete ui;
}
