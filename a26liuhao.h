#ifndef A26LIUHAO_H
#define A26LIUHAO_H

#include <QDialog>

namespace Ui {
class a26liuhao;
}

class a26liuhao : public QDialog
{
    Q_OBJECT

public:
    explicit a26liuhao(QWidget *parent = 0);
    ~a26liuhao();

private:
    Ui::a26liuhao *ui;
};

#endif // A26LIUHAO_H
