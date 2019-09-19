//Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html

#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets>
#include <QKeyEvent>
#include "../DesdeIMdB/leerIMdB.h"
#include "../Lista/list.h"
#include "../DesdeIMdB/descarga.cpp"
#include "../Archivo_csv/lectura.cpp"
#include "../Paginacion/Pagina.h"

class Ventana : public QWidget
{
public:
    explicit Ventana(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;

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
    int *pActual= new int (2);
    lectura l;
    jpeg j;
    HTTPDownloader http;
    Pagina p;
    int *cantPPag=new int (12);
    List L = l.lect();
    int *pelTot=new int (L.cant());
    int *pagTot=new int ((*pelTot/ *cantPPag)-1);
    string* rutaA=new string("/home/yenus/CLionProjects/TecFlix/pstA");
    string* rutaB=new string("/home/yenus/CLionProjects/TecFlix/pstB");
    string* ruta=new string("/home/yenus/CLionProjects/TecFlix/pst");
    void psig();
    void pant();


    bool eventFilter(QObject *object, QEvent *event) override;
    void actPenPant(string ruta);
};

Ventana::Ventana(QWidget *parent) : QWidget(parent)
{
    const int dist =10;
    const int x= 182;
    const int y= 268;
    QApplication::instance()->installEventFilter(this);

    btn1 = new QPushButton("", this);
    btn1->installEventFilter(this);
    btn1->setGeometry(dist, dist+50, x , y);
    connect(btn1, &QPushButton::clicked, this, &QWidget::close);

    btn2 = new QPushButton("", this);
    btn2->installEventFilter(this);
    btn2->setGeometry((2*dist+x), dist+50, x, y);
    connect(btn2, &QPushButton::clicked, this, &QWidget::close);

    btn3 = new QPushButton("", this);
    btn3->installEventFilter(this);
    btn3->setGeometry((3*dist+2*x), dist+50, x, y);
    connect(btn3, &QPushButton::clicked, this, &QWidget::close);

    btn4 = new QPushButton("", this);
    btn4->installEventFilter(this);
    btn4->setGeometry(4*dist+3*x, dist+50, x, y);
    connect(btn4, &QPushButton::clicked, this, &QWidget::close);

    btn5 = new QPushButton("", this);
    btn5->installEventFilter(this);
    btn5->setGeometry(dist, dist*2+y+50, x , y);
    connect(btn5, &QPushButton::clicked, this, &QWidget::close);

    btn6 = new QPushButton("", this);
    btn6->installEventFilter(this);
    btn6->setGeometry((2*dist+x), dist*2+y+50, x, y);
    connect(btn6, &QPushButton::clicked, this, &QWidget::close);

    btn7 = new QPushButton("", this);
    btn7->installEventFilter(this);
    btn7->setGeometry((3*dist+2*x), dist*2+y+50, x, y);
    connect(btn7, &QPushButton::clicked, this, &QWidget::close);

    btn8 = new QPushButton("", this);
    btn8->installEventFilter(this);
    btn8->setGeometry(4*dist+3*x, dist*2+y+50, x, y);
    connect(btn8, &QPushButton::clicked, this, &QWidget::close);

    btn9 = new QPushButton("", this);
    btn9->installEventFilter(this);
    btn9->setGeometry(dist, dist*3+y*2+50, x , y);
    connect(btn9, &QPushButton::clicked, this, &QWidget::close);

    btn10 = new QPushButton("", this);
    btn10->installEventFilter(this);
    btn10->setGeometry((2*dist+x), dist*3+y*2+50, x, y);
    connect(btn10, &QPushButton::clicked, this, &QWidget::close);

    btn11 = new QPushButton("", this);
    btn11->installEventFilter(this);
    btn11->setGeometry((3*dist+2*x), dist*3+y*2+50, x, y);
    connect(btn11, &QPushButton::clicked, this, &QWidget::close);

    btn12 = new QPushButton("", this);
    btn12->installEventFilter(this);
    btn12->setGeometry(4*dist+3*x, dist*3+y*2+50, x, y);
    connect(btn12, &QPushButton::clicked, this, &QWidget::close);
    p.setCantPag(*cantPPag);
    p.setPagTotales(*pelTot);
    for (int i = 0; i < p.getCantPag(); i++) {
        List pagActL = p.newpag(*pActual, L);
        string data = http.download(pagActL.obt_by_position(i).getImdb());
        //cout<<data<<endl;
        j.download_jpeg(*ruta, http.getImageURL(data), i);
    }
    actPenPant(*ruta);
    psig();

    /*QLabel* lbl = new QLabel(this);
    lbl->setGeometry(130, 10, 800, 30);
    lbl->setFont(QFont("Arial", 12));
    lbl->setText("Hello World");*/
}
bool Ventana::eventFilter(QObject *object, QEvent *event) {
    if (event->type() == QEvent::KeyPress) {

        auto *key_event = dynamic_cast<QKeyEvent *>(event);
        if (key_event->key() == Qt::Key_Down) {
            if (*pActual == 0) {}
            else {
                *pActual-=1;
                actPenPant(*rutaA);
                pant();
                psig();
            }

        }else if (key_event->key() == Qt::Key_Up){
            if (*pActual == *pagTot) {}
            else {
                *pActual+=1;
                actPenPant(*rutaB);
                pant();
                psig();
            }
        }
    } else {
        // standard event processing
        return QObject::eventFilter(object, event);
    }
}

void Ventana::keyPressEvent(QKeyEvent *event) {
    QWidget::keyPressEvent(event);
}

void Ventana::actPenPant(string rutaAct) {
    //pagActL.print();
    List pagActL = p.newpag(*pActual, L);
    for (int i = 0; i < p.getCantPag(); i++) {
        string str = to_string(i);
        string rutaL = rutaAct + str + ".jpg";

        QPixmap pix1(rutaL.c_str());
        QPixmap pix = pix1.scaled(182, 268, Qt::IgnoreAspectRatio);

        QIcon ButtonIcon(pix);
        switch (i + 1) {
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
                cout << "error" << endl;
                break;
        }
        remove(rutaL.c_str());
        qApp->processEvents();
    }

}

void Ventana::pant() {
    List pagAntL = p.pagant();
    //pagAntL.print();
    for (int i = 0; i < p.getCantPag(); i++) {
        string data = http.download(pagAntL.obt_by_position(i).getImdb());
        j.download_jpeg(*rutaA, http.getImageURL(data), i);
        string str = to_string(i);
        string rutaL = *rutaA + str + ".jpg";
    }
}

void Ventana::psig() {
    List pagSigL = p.pagsig();
    //pagAntL.print();
    for (int i = 0; i < p.getCantPag(); i++) {
        string data = http.download(pagSigL.obt_by_position(i).getImdb());
        j.download_jpeg(*rutaB, http.getImageURL(data), i);
        string str = to_string(i);
        string rutaL = *rutaB + str + ".jpg";
    }
}
