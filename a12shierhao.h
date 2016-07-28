#ifndef A12SHIERHAO_H
#define A12SHIERHAO_H

#include <QDialog>

namespace Ui {
class a12shierhao;
}

class a12shierhao : public QDialog
{
    Q_OBJECT

public:
    explicit a12shierhao(QWidget *parent = 0);
    ~a12shierhao();

private:
    Ui::a12shierhao *ui;
};

#endif // A12SHIERHAO_H
