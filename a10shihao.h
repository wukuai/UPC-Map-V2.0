#ifndef A10SHIHAO_H
#define A10SHIHAO_H

#include <QDialog>

namespace Ui {
class A10shihao;
}

class A10shihao : public QDialog
{
    Q_OBJECT

public:
    explicit A10shihao(QWidget *parent = 0);
    ~A10shihao();

private:
    Ui::A10shihao *ui;
};

#endif // A10SHIHAO_H
