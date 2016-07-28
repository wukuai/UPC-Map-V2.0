#ifndef A7HUIYI_H
#define A7HUIYI_H

#include <QDialog>

namespace Ui {
class A7huiyi;
}

class A7huiyi : public QDialog
{
    Q_OBJECT

public:
    explicit A7huiyi(QWidget *parent = 0);
    ~A7huiyi();

private:
    Ui::A7huiyi *ui;
};

#endif // A7HUIYI_H
