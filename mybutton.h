#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>

class MyButton : public QPushButton{
    Q_OBJECT
//public:
//    explicit MyButton()
protected:
    void mouseReleaseEvent(QMouseEvent *event);
};

#endif // MYBUTTON_H
