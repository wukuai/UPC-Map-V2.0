#ifndef A29JIUHAO_H
#define A29JIUHAO_H

#include <QDialog>

namespace Ui {
class a29jiuhao;
}

class a29jiuhao : public QDialog
{
    Q_OBJECT

public:
    explicit a29jiuhao(QWidget *parent = 0);
    ~a29jiuhao();

private:
    Ui::a29jiuhao *ui;
};

#endif // A29JIUHAO_H
