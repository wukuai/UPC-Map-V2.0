#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //大斯蒂芬
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowOpacity(1);
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.setWindowTitle("石大向导");

//   this->resize( QSize( 612.5, 432.5 ));
//    w.setMinimumSize ( 612.5*0.5, 432.5*0.5 );
    w.resize( QSize( 612.5*1.3, 432.5*1.3));



//    setMaximumSize();

    w.show();

    return a.exec();
}
