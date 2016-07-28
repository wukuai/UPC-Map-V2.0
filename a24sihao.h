#ifndef A24SIHAO_H
#define A24SIHAO_H

#include <QDialog>

namespace Ui {
class a24sihao;
}

class a24sihao : public QDialog
{
    Q_OBJECT

public:
    explicit a24sihao(QWidget *parent = 0);
    ~a24sihao();

private:
    Ui::a24sihao *ui;
};

#endif // A24SIHAO_H
