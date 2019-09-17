#include <QPushButton>
#include <QWidget>
#include <QtWidgets>
#include "/home/yenus/CLionProjects/TecFlix/DesdeIMdB/leerIMdB.h"
#include "/home/yenus/CLionProjects/TecFlix/DesdeIMdB/descarga.cpp"
#include "/home/yenus/CLionProjects/TecFlix/main.cpp"


//Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html


class Ventana : public QWidget
{
public:
    Ventana(QWidget *parent = 0);

protected:
    virtual void wheelEvent(QWheelEvent *event);

private:
    QPushButton* btn1;
    QPushButton* btn2;
    QPushButton* btn3;
    QPushButton* btn4;
    QPushButton* btn5;
    QPushButton* btn6;
    QPushButton* btn7;
    QPushButton* btn8;
    QPushButton* btn9;
    QPushButton* btn10;
    QPushButton* btn11;
    QPushButton* btn12;
    int* pActual;
    lectura l;
    jpeg j;
    HTTPDownloader h;
    List L=l.lect();
    int cantPel=L.cant();
    string ruta="/home/yenus/CLionProjects/TecFlix/pst.jpg";
};

Ventana::Ventana(QWidget *parent) : QWidget(parent)
{
    const int dist =10;
    const int x= 182;
    const int y= 268;
    *pActual=0;
    btn1 = new QPushButton("Pel1", this);
    btn1->setGeometry(dist, dist+50, x , y);
    connect(btn1, &QPushButton::clicked, this, &QWidget::close);

    btn2 = new QPushButton("Pel2", this);
    btn2->setGeometry((2*dist+x), dist+50, x, y);
    connect(btn2, &QPushButton::clicked, this, &QWidget::close);

    btn3 = new QPushButton("Pel3", this);
    btn3->setGeometry((3*dist+2*x), dist+50, x, y);
    connect(btn3, &QPushButton::clicked, this, &QWidget::close);

    btn4 = new QPushButton("Pel4", this);
    btn4->setGeometry(4*dist+3*x, dist+50, x, y);
    connect(btn4, &QPushButton::clicked, this, &QWidget::close);

    btn5 = new QPushButton("Pel5", this);
    btn5->setGeometry(dist, dist*2+y+50, x , y);
    connect(btn5, &QPushButton::clicked, this, &QWidget::close);

    btn6 = new QPushButton("Pel6", this);
    btn6->setGeometry((2*dist+x), dist*2+y+50, x, y);
    connect(btn6, &QPushButton::clicked, this, &QWidget::close);

    btn7 = new QPushButton("Pel7", this);
    btn7->setGeometry((3*dist+2*x), dist*2+y+50, x, y);
    connect(btn7, &QPushButton::clicked, this, &QWidget::close);

    btn8 = new QPushButton("Pel8", this);
    btn8->setGeometry(4*dist+3*x, dist*2+y+50, x, y);
    connect(btn8, &QPushButton::clicked, this, &QWidget::close);

    btn9 = new QPushButton("Pel9", this);
    btn9->setGeometry(dist, dist*3+y*2+50, x , y);
    connect(btn9, &QPushButton::clicked, this, &QWidget::close);

    btn10 = new QPushButton("Pel10", this);
    btn10->setGeometry((2*dist+x), dist*3+y*2+50, x, y);
    connect(btn10, &QPushButton::clicked, this, &QWidget::close);

    btn11 = new QPushButton("Pel11", this);
    btn11->setGeometry((3*dist+2*x), dist*3+y*2+50, x, y);
    connect(btn11, &QPushButton::clicked, this, &QWidget::close);

    btn12 = new QPushButton("Pel12", this);
    btn12->setGeometry(4*dist+3*x, dist*3+y*2+50, x, y);
    connect(btn12, &QPushButton::clicked, this, &QWidget::close);


    /*QLabel* lbl = new QLabel(this);
    lbl->setGeometry(130, 10, 800, 30);
    lbl->setFont(QFont("Arial", 12));
    lbl->setText("Hello World");*/
}

void Ventana::wheelEvent(QWheelEvent *event) {
    //eliminar archivo = remove(char* nombre)==0
/*
    List *ptoList = (List *)malloc(sizeof(L));
    *ptoList=L;
    Pagina p(cantPel,*ptoList);
    string rutaAct;

    if (event->delta()<0){
        if(*pActual==10000){}
        else{
            *pActual-=1;
            List pagActL= p.nuevaPag(*pActual);
            for(int i=0;i<p.getCantidadporPag();i++){
                string data=h.download(pagActL.obt_by_position(i).getImdb());
                j.download_jpeg(h.getImageURL(data),i);
                string str = to_string(i);
                rutaAct="/home/yenus/CLionProjects/TecFlix/pst"+str+".jpg";
                QPixmap pixmap(rutaAct.c_str());
                QIcon ButtonIcon(pixmap);
                btn1->setIcon(ButtonIcon);
                btn1->setIconSize(pixmap.rect().size());

            }

        }
    }
*/

}
