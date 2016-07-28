#ifndef A60YANYI_H
#define A60YANYI_H

#include <QDialog>

namespace Ui {
class a60yanyi;
}

class a60yanyi : public QDialog
{
    Q_OBJECT

public:
    explicit a60yanyi(QWidget *parent = 0);
    ~a60yanyi();

private:
    Ui::a60yanyi *ui;
};

#endif // A60YANYI_H
