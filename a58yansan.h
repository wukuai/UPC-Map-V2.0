#ifndef A58YANSAN_H
#define A58YANSAN_H

#include <QDialog>

namespace Ui {
class a58yansan;
}

class a58yansan : public QDialog
{
    Q_OBJECT

public:
    explicit a58yansan(QWidget *parent = 0);
    ~a58yansan();

private:
    Ui::a58yansan *ui;
};

#endif // A58YANSAN_H
