#ifndef A17SHIQIHAO_H
#define A17SHIQIHAO_H

#include <QDialog>

namespace Ui {
class a17shiqihao;
}

class a17shiqihao : public QDialog
{
    Q_OBJECT

public:
    explicit a17shiqihao(QWidget *parent = 0);
    ~a17shiqihao();

private:
    Ui::a17shiqihao *ui;
};

#endif // A17SHIQIHAO_H
