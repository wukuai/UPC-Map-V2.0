#ifndef A8XIAOYIYUAN_H
#define A8XIAOYIYUAN_H

#include <QDialog>

namespace Ui {
class A8xiaoyiyuan;
}

class A8xiaoyiyuan : public QDialog
{
    Q_OBJECT

public:
    explicit A8xiaoyiyuan(QWidget *parent = 0);
    ~A8xiaoyiyuan();

private:
    Ui::A8xiaoyiyuan *ui;
};

#endif // A8XIAOYIYUAN_H
