#ifndef A13SHISANHAO_H
#define A13SHISANHAO_H

#include <QDialog>

namespace Ui {
class a13shisanhao;
}

class a13shisanhao : public QDialog
{
    Q_OBJECT

public:
    explicit a13shisanhao(QWidget *parent = 0);
    ~a13shisanhao();

private:
    Ui::a13shisanhao *ui;
};

#endif // A13SHISANHAO_H
