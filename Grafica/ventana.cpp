//Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html

#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets>
#include "../DesdeIMdB/leerIMdB.h"
#include "../Lista/list.h"
#include "../DesdeIMdB/descarga.cpp"
#include "../Archivo_csv/lectura.cpp"
#include "../Paginacion/Pagina.h"

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
    int pActual=400;
    lectura l;
    jpeg j;
    HTTPDownloader http;

    string ruta="/home/yenus/CLionProjects/TecFlix/pst.jpg";
};

Ventana::Ventana(QWidget *parent) : QWidget(parent)
{
    const int dist =10;
    const int x= 182;
    const int y= 268;
    btn1 = new QPushButton("", this);
    btn1->setGeometry(dist, dist+50, x , y);
    connect(btn1, &QPushButton::clicked, this, &QWidget::close);

    btn2 = new QPushButton("", this);
    btn2->setGeometry((2*dist+x), dist+50, x, y);
    connect(btn2, &QPushButton::clicked, this, &QWidget::close);

    btn3 = new QPushButton("", this);
    btn3->setGeometry((3*dist+2*x), dist+50, x, y);
    connect(btn3, &QPushButton::clicked, this, &QWidget::close);

    btn4 = new QPushButton("", this);
    btn4->setGeometry(4*dist+3*x, dist+50, x, y);
    connect(btn4, &QPushButton::clicked, this, &QWidget::close);

    btn5 = new QPushButton("", this);
    btn5->setGeometry(dist, dist*2+y+50, x , y);
    connect(btn5, &QPushButton::clicked, this, &QWidget::close);

    btn6 = new QPushButton("", this);
    btn6->setGeometry((2*dist+x), dist*2+y+50, x, y);
    connect(btn6, &QPushButton::clicked, this, &QWidget::close);

    btn7 = new QPushButton("", this);
    btn7->setGeometry((3*dist+2*x), dist*2+y+50, x, y);
    connect(btn7, &QPushButton::clicked, this, &QWidget::close);

    btn8 = new QPushButton("", this);
    btn8->setGeometry(4*dist+3*x, dist*2+y+50, x, y);
    connect(btn8, &QPushButton::clicked, this, &QWidget::close);

    btn9 = new QPushButton("", this);
    btn9->setGeometry(dist, dist*3+y*2+50, x , y);
    connect(btn9, &QPushButton::clicked, this, &QWidget::close);

    btn10 = new QPushButton("", this);
    btn10->setGeometry((2*dist+x), dist*3+y*2+50, x, y);
    connect(btn10, &QPushButton::clicked, this, &QWidget::close);

    btn11 = new QPushButton("", this);
    btn11->setGeometry((3*dist+2*x), dist*3+y*2+50, x, y);
    connect(btn11, &QPushButton::clicked, this, &QWidget::close);

    btn12 = new QPushButton("", this);
    btn12->setGeometry(4*dist+3*x, dist*3+y*2+50, x, y);
    connect(btn12, &QPushButton::clicked, this, &QWidget::close);


    /*QLabel* lbl = new QLabel(this);
    lbl->setGeometry(130, 10, 800, 30);
    lbl->setFont(QFont("Arial", 12));
    lbl->setText("Hello World");*/
}

void Ventana::wheelEvent(QWheelEvent *event) {
    List L=l.lect();
    int cantPel=L.cant();
    Pagina p;
    bool ejecutando=false;
    string ruta;

    if (event->delta()){
        ejecutando = true;
    }
    else{}
    if (ejecutando){
    if (event->delta()<0) {
        if(pActual==0){}
        else{
            List pagActL= p.newpag(pActual,cantPel,L);
            for(int i=0;i<p.getcantPag();i++){
                string data=http.download(pagActL.obt_by_position(i).getImdb());

                j.download_jpeg(http.getImageURL(data),i);

                string str = to_string(i);

                ruta="/home/yenus/CLionProjects/TecFlix/pst"+str+".jpg";

                QPixmap pix1(ruta.c_str());
                QPixmap pix=pix1.scaled(182,268,Qt::IgnoreAspectRatio);

                QIcon ButtonIcon(pix);
                switch (i+1){
                    case 1:
                        btn1->setIcon(ButtonIcon);
                        btn1->setIconSize(btn1->rect().size());
                        break;
                    case 2:
                        btn2->setIcon(ButtonIcon);
                        btn2->setIconSize(btn1->rect().size());
                        break;
                    case 3:
                        btn3->setIcon(ButtonIcon);
                        btn3->setIconSize(btn1->rect().size());
                        break;
                    case 4:
                        btn4->setIcon(ButtonIcon);
                        btn4->setIconSize(btn1->rect().size());
                        break;
                    case 5:
                        btn5->setIcon(ButtonIcon);
                        btn5->setIconSize(pix.rect().size());
                        break;
                    case 6:
                        btn6->setIcon(ButtonIcon);
                        btn6->setIconSize(pix.rect().size());
                        break;
                    case 7:
                        btn7->setIcon(ButtonIcon);
                        btn7->setIconSize(pix.rect().size());
                        break;
                    case 8:
                        btn8->setIcon(ButtonIcon);
                        btn8->setIconSize(pix.rect().size());
                        break;
                    case 9:
                        btn9->setIcon(ButtonIcon);
                        btn9->setIconSize(pix.rect().size());
                        break;
                    case 10:
                        btn10->setIcon(ButtonIcon);
                        btn10->setIconSize(pix.rect().size());
                        break;
                    case 11:
                        btn11->setIcon(ButtonIcon);
                        btn11->setIconSize(pix.rect().size());
                        break;
                    case 12:
                        btn12->setIcon(ButtonIcon);
                        btn12->setIconSize(pix.rect().size());
                        break;
                    default:
                        cout<<"error"<<endl;
                        break;
                }

                remove(ruta.c_str());

            }

        }
    }
    }else{
        ejecutando=false;
    }

}
