#ifndef A6GUOJI_H
#define A6GUOJI_H

#include <QDialog>

namespace Ui {
class A6guoji;
}

class A6guoji : public QDialog
{
    Q_OBJECT

public:
    explicit A6guoji(QWidget *parent = 0);
    ~A6guoji();

private:
    Ui::A6guoji *ui;
};

#endif // A6GUOJI_H
