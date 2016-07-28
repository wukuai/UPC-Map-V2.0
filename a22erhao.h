#ifndef A22ERHAO_H
#define A22ERHAO_H

#include <QDialog>

namespace Ui {
class a22erhao;
}

class a22erhao : public QDialog
{
    Q_OBJECT

public:
    explicit a22erhao(QWidget *parent = 0);
    ~a22erhao();

private:
    Ui::a22erhao *ui;
};

#endif // A22ERHAO_H
