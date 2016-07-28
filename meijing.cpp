#include "meijing.h"
#include "ui_meijing.h"
#include "QPixmap"
#include "QDebug"
#include "Qt"
#include "QMessageBox"
#include "QSize"


meijing::meijing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::meijing)
{
    ui->setupUi(this);

//    pix_x=ui->label->x();
//    pix_y=ui->label->y();
    pix_cnt=0;


//    pix_cnt=0;

    //载入封面
    pix[0].load(":/meijing/xiaoyuanquanjing (0).jpg");
    yuan_width=ui->label->width();
    yuan_height=ui->label->height();
    pix[0]=pix[0].scaled(QSize(yuan_width,yuan_height),Qt::KeepAspectRatio);
    ui->label->setPixmap(pix[0]);
    qDebug()<<ui->label->width();
    moshi="校园全景";
    pix_width=yuan_width;
    pix_height=yuan_height;

   pixload();
}

meijing::~meijing()
{
    delete ui;
}
void meijing::pixload(){
    if(moshi=="校园全景"){
        pix[0].load(":/meijing/xiaoyuanquanjing (0).jpg");
        pix[1].load(":/meijing/xiaoyuanquanjing (1).jpg");
        pix[2].load(":/meijing/xiaoyuanquanjing (2).jpg");
        pix[3].load(":/meijing/xiaoyuanquanjing (3).jpg");
        pix[4].load(":/meijing/xiaoyuanquanjing (4).jpg");
        pix[5].load(":/meijing/xiaoyuanquanjing (5).jpg");
        pix[6].load(":/meijing/xiaoyuanquanjing (6).jpg");
        pix[7].load(":/meijing/xiaoyuanquanjing (7).jpg");
        pix[8].load(":/meijing/xiaoyuanquanjing (8).jpg");
        pix[9].load(":/meijing/xiaoyuanquanjing (9).jpg");
        pix[10].load(":/meijing/xiaoyuanquanjing (10).jpg");
        pix[11].load(":/meijing/xiaoyuanquanjing (11).jpg");
        pix[12].load(":/meijing/xiaoyuanquanjing (12).jpg");
        pix[13].load(":/meijing/xiaoyuanquanjing (13).jpg");
        pix[14].load(":/meijing/xiaoyuanquanjing (14).jpg");
        pix[15].load(":/meijing/xiaoyuanquanjing (15).jpg");
        pix[16].load(":/meijing/xiaoyuanquanjing (16).jpg");
        pix[17].load(":/meijing/xiaoyuanquanjing (17).jpg");
        pix[18].load(":/meijing/xiaoyuanquanjing (18).jpg");
        pix[19].load(":/meijing/xiaoyuanquanjing (19).jpg");
        pix[20].load(":/meijing/xiaoyuanquanjing (20).jpg");
        pix[21].load(":/meijing/xiaoyuanquanjing (21).jpg");
        pix[22].load(":/meijing/xiaoyuanquanjing (22).jpg");
        pix[23].load(":/meijing/xiaoyuanquanjing (23).jpg");
        pix[24].load(":/meijing/xiaoyuanquanjing (24).jpg");
        pix[25].load(":/meijing/xiaoyuanquanjing (25).jpg");
        pix[26].load(":/meijing/xiaoyuanquanjing (26).jpg");
        pix[27].load(":/meijing/xiaoyuanquanjing (27).jpg");
    }

    else if(moshi=="毕业季"){
        pix[0].load("E:\\QT\\untitled6\\meijing\\biyeji(0).jpg");
        pix[1].load("E:\\QT\\untitled6\\meijing\\biyeji(1).jpg");
        pix[2].load("E:\\QT\\untitled6\\meijing\\biyeji(2).jpg");
        pix[3].load("E:\\QT\\untitled6\\meijing\\biyeji(3).jpg");
        pix[4].load("E:\\QT\\untitled6\\meijing\\biyeji(4).jpg");
        pix[5].load("E:\\QT\\untitled6\\meijing\\biyeji(5).jpg");
        pix[6].load("E:\\QT\\untitled6\\meijing\\biyeji(6).jpg");
        pix[7].load("E:\\QT\\untitled6\\meijing\\biyeji(7).jpg");
        pix[8].load("E:\\QT\\untitled6\\meijing\\biyeji(8).jpg");
    }
    else if(moshi=="唐岛湾"){
        pix[0].load("E:\\QT\\untitled6\\meijing\\tangdaowan(0).jpg");
        pix[1].load("E:\\QT\\untitled6\\meijing\\tangdaowan(1).jpg");
        pix[2].load("E:\\QT\\untitled6\\meijing\\tangdaowan(2).jpg");
        pix[3].load("E:\\QT\\untitled6\\meijing\\tangdaowan(3).jpg");
        pix[4].load("E:\\QT\\untitled6\\meijing\\tangdaowan(4).jpg");
        pix[5].load("E:\\QT\\untitled6\\meijing\\tangdaowan(5).jpg");
        pix[6].load("E:\\QT\\untitled6\\meijing\\tangdaowan(6).jpg");
    }
    else if(moshi=="运动会"){
        pix[0].load("E:\\QT\\untitled6\\meijing\\yundonghui(0).jpg");
        pix[1].load("E:\\QT\\untitled6\\meijing\\yundonghui(1).jpg");
        pix[2].load("E:\\QT\\untitled6\\meijing\\yundonghui(2).jpg");
        pix[3].load("E:\\QT\\untitled6\\meijing\\yundonghui(3).jpg");
        pix[4].load("E:\\QT\\untitled6\\meijing\\yundonghui(4).jpg");
        pix[5].load("E:\\QT\\untitled6\\meijing\\yundonghui(5).jpg");
        pix[6].load("E:\\QT\\untitled6\\meijing\\yundonghui(6).jpg");
        pix[7].load("E:\\QT\\untitled6\\meijing\\yundonghui(7).jpg");
        pix[8].load("E:\\QT\\untitled6\\meijing\\yundonghui(8).jpg");
        pix[9].load("E:\\QT\\untitled6\\meijing\\yundonghui(9).jpg");
        pix[10].load("E:\\QT\\untitled6\\meijing\\yundonghui(10).jpg");
        pix[11].load("E:\\QT\\untitled6\\meijing\\yundonghui(11).jpg");
    }
    else if (moshi=="音乐会"){
        pix[0].load("E:\\QT\\untitled6\\meijing\\yinyuehui(0).jpg");
        pix[1].load("E:\\QT\\untitled6\\meijing\\yinyuehui(1).jpg");
    }
    else if(moshi=="军训"){
        pix[0].load("E:\\QT\\untitled6\\meijing\\junxun(0).jpg");
        pix[1].load("E:\\QT\\untitled6\\meijing\\junxun(1).jpg");
        pix[2].load("E:\\QT\\untitled6\\meijing\\junxun(2).jpg");
        pix[3].load("E:\\QT\\untitled6\\meijing\\junxun(3).jpg");
    }
    else if(moshi=="思创论坛"){
        pix[0].load("E:\\QT\\untitled6\\meijing\\sichuang(0).jpg");
        pix[1].load("E:\\QT\\untitled6\\meijing\\sichuang(1).jpg");
        pix[2].load("E:\\QT\\untitled6\\meijing\\sichuang(2).jpg");
        pix[3].load("E:\\QT\\untitled6\\meijing\\sichuang(3).jpg");
    }

    for(int i=0;i<28;i++){
    pix[i]=pix[i].scaled(QSize(yuan_width,yuan_height),Qt::KeepAspectRatio);
    }
}


void meijing::on_pushButton_2_clicked() //下一张
{
//    if(mo)
//    quanjing[i]=quanjing[i].scaled(ui->label->width(),ui->label->height()),Qt::KeepAspectRatio;
        ui->label->setGeometry(0,0,ui->label->width(),ui->label->height());
       if (moshi=="校园全景")
       {
           pix_cnt++;
           if(pix_cnt>=quanjing_N) {
//                quanjing_cnt=0;
                QMessageBox *wanle=new QMessageBox(this);
                wanle->setWindowTitle("提示");
                wanle->setText("校园全景已浏览完毕！");
                wanle->show();
                 pix_cnt--;
           }
           else{
//             quanjing[quanjing_cnt].scaled(QSize(yuan_width,yuan_height),Qt::KeepAspectRatio);
               ui->label->setAlignment(Qt::AlignCenter);
               ui->label->setPixmap(pix[pix_cnt]);
           }

       }
       else if (moshi=="毕业季")
       {

           pix_cnt++;
           if(pix_cnt>=biyeji_N) {
//              quanjing_cnt=0;
                QMessageBox *wanle=new QMessageBox(this);
                wanle->setWindowTitle("提示");
                wanle->setText("毕业季已浏览完毕！");
                wanle->show();
                 pix_cnt--;
           }
           else{
             ui->label->setAlignment(Qt::AlignCenter);
             ui->label->setPixmap(pix[pix_cnt]);
           }
       }
           else if (moshi=="唐岛湾")
       {
           pix_cnt++;
           if(pix_cnt>=tangdaowan_N) {
                QMessageBox *wanle=new QMessageBox(this);
                wanle->setWindowTitle("提示");
                wanle->setText("唐岛湾美景已浏览完毕！");
                wanle->show();
                 pix_cnt--;
           }
           else{
             ui->label->setAlignment(Qt::AlignCenter);
             ui->label->setPixmap(pix[pix_cnt]);
           }
       }
           else if (moshi=="运动会")
       {
           pix_cnt++;
           if(pix_cnt>=yundonghui_N) {
                QMessageBox *wanle=new QMessageBox(this);
                wanle->setWindowTitle("提示");
                wanle->setText("运动会美图已浏览完毕！");
                wanle->show();
                pix_cnt--;
           }
           else{
             ui->label->setAlignment(Qt::AlignCenter);
             ui->label->setPixmap(pix[pix_cnt]);
           }
       }
           else if (moshi=="音乐会")
       {
           pix_cnt++;
           if(pix_cnt>=yinyuehui_N) {
                QMessageBox *wanle=new QMessageBox(this);
                wanle->setWindowTitle("提示");
                wanle->setText("音乐会美图已浏览完毕！");
                wanle->show();
                pix_cnt--;
           }
           else{
             ui->label->setAlignment(Qt::AlignCenter);
             ui->label->setPixmap(pix[pix_cnt]);
           }
       }
           else if (moshi=="军训")
       {
           pix_cnt++;
           if(pix_cnt>=junxun_N) {
                QMessageBox *wanle=new QMessageBox(this);
                wanle->setWindowTitle("提示");
                wanle->setText("军训美图已浏览完毕！");
                wanle->show();
                pix_cnt--;
           }
           else{
             ui->label->setAlignment(Qt::AlignCenter);
             ui->label->setPixmap(pix[pix_cnt]);
           }
       }
           else if (moshi=="思创论坛")
       {
           pix_cnt++;
           if(pix_cnt>=sichuang_N) {
                QMessageBox *wanle=new QMessageBox(this);
                wanle->setWindowTitle("提示");
                wanle->setText("思创论坛美图已浏览完毕！");
                wanle->show();
                pix_cnt--;
           }
           else{
             ui->label->setAlignment(Qt::AlignCenter);
             ui->label->setPixmap(pix[pix_cnt]);
           }
       }

}

void meijing::on_comboBox_activated(const QString &arg1)
{
    moshi=arg1;
    ui->label->setGeometry(0,0,ui->label->width(),ui->label->height());

    if (arg1=="校园全景")
    {
        pixload();
        ui->label->setAlignment(Qt::AlignCenter);
        ui->label->setPixmap(pix[0]);
        pix_cnt=0;
    }
        else if (arg1=="毕业季")
    {
        pixload();
        ui->label->setAlignment(Qt::AlignCenter);
        ui->label->setPixmap(pix[0]);
        pix_cnt=0;
    }
        else if (arg1=="唐岛湾")
    {
        pixload();
        ui->label->setAlignment(Qt::AlignCenter);
        ui->label->setPixmap(pix[0]);
        pix_cnt=0;
    }
        else if (arg1=="运动会")
    {
        pixload();
        ui->label->setAlignment(Qt::AlignCenter);
        ui->label->setPixmap(pix[0]);
        pix_cnt=0;
    }
        else if (arg1=="音乐会")
    {
        pixload();
        ui->label->setAlignment(Qt::AlignCenter);
        ui->label->setPixmap(pix[0]);
        pix_cnt=0;
    }
        else if (arg1=="军训")
    {
        pixload();
        ui->label->setAlignment(Qt::AlignCenter);
        ui->label->setPixmap(pix[0]);
        pix_cnt=0;
    }
        else if (arg1=="思创论坛")
    {
        pixload();
        ui->label->setAlignment(Qt::AlignCenter);
        ui->label->setPixmap(pix[0]);
        pix_cnt=0;
    }
}


void meijing::on_pushButton_clicked() //上一张
{
    ui->label->setGeometry(0,0,ui->label->width(),ui->label->height());

        pix_cnt--;
        if(pix_cnt<0) {
             QMessageBox *wanle=new QMessageBox(this);
             wanle->setWindowTitle("提示");
             wanle->setText("已经是第一张了！");
             wanle->show();
              pix_cnt=0;
        }
        else{
          ui->label->setAlignment(Qt::AlignCenter);
          ui->label->setPixmap(pix[pix_cnt]);
        }
}

void meijing::on_pushButton_3_clicked()
{
    close();
}
void meijing::mousePressEvent(QMouseEvent *e){
     last=e->globalPos();
}

void meijing::mouseMoveEvent(QMouseEvent *e){

      qDebug()<<"move";
      pix_x=ui->label->x();
      pix_y=ui->label->y();
      int dx=e->globalX()-last.x();
      int dy=e->globalY()-last.y();
      last=e->globalPos();
      pix_x+=dx;
      pix_y+=dy;
      ui->label->setGeometry(pix_x,pix_y,ui->label->width(),ui->label->height());
}
