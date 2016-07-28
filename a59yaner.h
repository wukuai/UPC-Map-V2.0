#ifndef A59YANER_H
#define A59YANER_H

#include <QDialog>

namespace Ui {
class a59yaner;
}

class a59yaner : public QDialog
{
    Q_OBJECT

public:
    explicit a59yaner(QWidget *parent = 0);
    ~a59yaner();

private:
    Ui::a59yaner *ui;
};

#endif // A59YANER_H
