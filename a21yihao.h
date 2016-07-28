#ifndef A21YIHAO_H
#define A21YIHAO_H

#include <QDialog>

namespace Ui {
class a21yihao;
}

class a21yihao : public QDialog
{
    Q_OBJECT

public:
    explicit a21yihao(QWidget *parent = 0);
    ~a21yihao();

private:
    Ui::a21yihao *ui;
};

#endif // A21YIHAO_H
