#ifndef A23SANHAO_H
#define A23SANHAO_H

#include <QDialog>

namespace Ui {
class a23sanhao;
}

class a23sanhao : public QDialog
{
    Q_OBJECT

public:
    explicit a23sanhao(QWidget *parent = 0);
    ~a23sanhao();

private:
    Ui::a23sanhao *ui;
};

#endif // A23SANHAO_H
