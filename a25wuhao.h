#ifndef A25WUHAO_H
#define A25WUHAO_H

#include <QDialog>

namespace Ui {
class a25wuhao;
}

class a25wuhao : public QDialog
{
    Q_OBJECT

public:
    explicit a25wuhao(QWidget *parent = 0);
    ~a25wuhao();

private:
    Ui::a25wuhao *ui;
};

#endif // A25WUHAO_H
