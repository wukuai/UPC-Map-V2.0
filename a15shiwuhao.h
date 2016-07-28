#ifndef A15SHIWUHAO_H
#define A15SHIWUHAO_H

#include <QDialog>

namespace Ui {
class a15shiwuhao;
}

class a15shiwuhao : public QDialog
{
    Q_OBJECT

public:
    explicit a15shiwuhao(QWidget *parent = 0);
    ~a15shiwuhao();

private:
    Ui::a15shiwuhao *ui;
};

#endif // A15SHIWUHAO_H
