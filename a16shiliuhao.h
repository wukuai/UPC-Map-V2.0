#ifndef A16SHILIUHAO_H
#define A16SHILIUHAO_H

#include <QDialog>

namespace Ui {
class a16shiliuhao;
}

class a16shiliuhao : public QDialog
{
    Q_OBJECT

public:
    explicit a16shiliuhao(QWidget *parent = 0);
    ~a16shiliuhao();

private:
    Ui::a16shiliuhao *ui;
};

#endif // A16SHILIUHAO_H
