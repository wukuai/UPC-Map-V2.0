#ifndef A11SHYIHAO_H
#define A11SHYIHAO_H

#include <QDialog>

namespace Ui {
class A11shyihao;
}

class A11shyihao : public QDialog
{
    Q_OBJECT

public:
    explicit A11shyihao(QWidget *parent = 0);
    ~A11shyihao();

private:
    Ui::A11shyihao *ui;
};

#endif // A11SHYIHAO_H
