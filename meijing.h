#ifndef MEIJING_H
#define MEIJING_H

#include <QDialog>
#include <QPixmap>
#include <QString>
#include <QPoint>
#include <QMouseEvent>

#define quanjing_N 28
#define biyeji_N 9
#define tangdaowan_N 7
#define yundonghui_N 12
#define yinyuehui_N 2
#define junxun_N 4
#define sichuang_N 4


namespace Ui {
class meijing;
}

class meijing : public QDialog
{
    Q_OBJECT

public:
    explicit meijing(QWidget *parent = 0);
    ~meijing();
    void pixload();
    void biyejiload();
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
//    void wheelEvent(QWheelEvent *e);

private slots:
    void on_pushButton_2_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::meijing *ui;
//    QPixmap pix[quanjing_N+biyeji_N];
    QPixmap pix[28];

    int pix_cnt;

    double yuan_height,yuan_width; //图片宽度和高度

    QString moshi;
    QPoint last;
    double pix_x,pix_y;
    double pix_width,pix_height;

};

#endif // MEIJING_H
