#ifndef A27QIHAO_H
#define A27QIHAO_H

#include <QDialog>

namespace Ui {
class a27qihao;
}

class a27qihao : public QDialog
{
    Q_OBJECT

public:
    explicit a27qihao(QWidget *parent = 0);
    ~a27qihao();

private:
    Ui::a27qihao *ui;
};

#endif // A27QIHAO_H
