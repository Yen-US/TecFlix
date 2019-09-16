#include <QApplication>
#include <QDebug>
#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include <QWidget>
#include <QIcon>
#include <QApplication>

//Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html


class Ventana : public QWidget
{
public:
    Ventana(QWidget *parent = 0);
};

Ventana::Ventana(QWidget *parent) : QWidget(parent)
{
    const int dist =10;
    const int x= 182;
    const int y= 268;
    QPushButton* btn1 = new QPushButton("Pel1", this);
    btn1->setGeometry(dist, dist+50, x , y);
    connect(btn1, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn2 = new QPushButton("Pel2", this);
    btn2->setGeometry((2*dist+x), dist+50, x, y);
    connect(btn2, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn3 = new QPushButton("Pel3", this);
    btn3->setGeometry((3*dist+2*x), dist+50, x, y);
    connect(btn3, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn4 = new QPushButton("Pel4", this);
    btn4->setGeometry(4*dist+3*x, dist+50, x, y);
    connect(btn4, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn5 = new QPushButton("Pel5", this);
    btn5->setGeometry(dist, dist*2+y+50, x , y);
    connect(btn5, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn6 = new QPushButton("Pel6", this);
    btn6->setGeometry((2*dist+x), dist*2+y+50, x, y);
    connect(btn6, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn7 = new QPushButton("Pel7", this);
    btn7->setGeometry((3*dist+2*x), dist*2+y+50, x, y);
    connect(btn7, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn8 = new QPushButton("Pel8", this);
    btn8->setGeometry(4*dist+3*x, dist*2+y+50, x, y);
    connect(btn8, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn9 = new QPushButton("Pel9", this);
    btn9->setGeometry(dist, dist*3+y*2+50, x , y);
    connect(btn9, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn10 = new QPushButton("Pel10", this);
    btn10->setGeometry((2*dist+x), dist*3+y*2+50, x, y);
    connect(btn10, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn11 = new QPushButton("Pel11", this);
    btn11->setGeometry((3*dist+2*x), dist*3+y*2+50, x, y);
    connect(btn11, &QPushButton::clicked, this, &QWidget::close);

    QPushButton* btn12 = new QPushButton("Pel12", this);
    btn12->setGeometry(4*dist+3*x, dist*3+y*2+50, x, y);
    connect(btn12, &QPushButton::clicked, this, &QWidget::close);



    /*QLabel* lbl = new QLabel(this);
    lbl->setGeometry(130, 10, 800, 30);
    lbl->setFont(QFont("Arial", 12));
    lbl->setText("Hello World");*/
}
