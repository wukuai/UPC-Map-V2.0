#ifndef A28BAHAO_H
#define A28BAHAO_H

#include <QDialog>

namespace Ui {
class a28bahao;
}

class a28bahao : public QDialog
{
    Q_OBJECT

public:
    explicit a28bahao(QWidget *parent = 0);
    ~a28bahao();

private:
    Ui::a28bahao *ui;
};

#endif // A28BAHAO_H
