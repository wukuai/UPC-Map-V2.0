#ifndef A14SHISIHAO_H
#define A14SHISIHAO_H

#include <QDialog>

namespace Ui {
class a14shisihao;
}

class a14shisihao : public QDialog
{
    Q_OBJECT

public:
    explicit a14shisihao(QWidget *parent = 0);
    ~a14shisihao();

private:
    Ui::a14shisihao *ui;
};

#endif // A14SHISIHAO_H
