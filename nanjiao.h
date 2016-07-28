#ifndef NANJIAO_H
#define NANJIAO_H

#include <QDialog>

namespace Ui {
class Nanjiao;
}

class Nanjiao : public QDialog
{
    Q_OBJECT

public:
    explicit Nanjiao(QWidget *parent = 0);
    ~Nanjiao();

private:
    Ui::Nanjiao *ui;
};

#endif // NANJIAO_H
