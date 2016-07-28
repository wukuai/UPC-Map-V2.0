#ifndef A9SHATANPAI_H
#define A9SHATANPAI_H

#include <QDialog>

namespace Ui {
class A9shatanpai;
}

class A9shatanpai : public QDialog
{
    Q_OBJECT

public:
    explicit A9shatanpai(QWidget *parent = 0);
    ~A9shatanpai();

private:
    Ui::A9shatanpai *ui;
};

#endif // A9SHATANPAI_H
