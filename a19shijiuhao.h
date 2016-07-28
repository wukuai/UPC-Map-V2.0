#ifndef A19SHIJIUHAO_H
#define A19SHIJIUHAO_H

#include <QDialog>

namespace Ui {
class a19shijiuhao;
}

class a19shijiuhao : public QDialog
{
    Q_OBJECT

public:
    explicit a19shijiuhao(QWidget *parent = 0);
    ~a19shijiuhao();

private:
    Ui::a19shijiuhao *ui;
};

#endif // A19SHIJIUHAO_H
