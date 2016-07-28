#ifndef A18SHIBAHAO_H
#define A18SHIBAHAO_H

#include <QDialog>

namespace Ui {
class a18shibahao;
}

class a18shibahao : public QDialog
{
    Q_OBJECT

public:
    explicit a18shibahao(QWidget *parent = 0);
    ~a18shibahao();

private:
    Ui::a18shibahao *ui;
};

#endif // A18SHIBAHAO_H
