//
// Created by yenus on 22/9/19.
//

#include "ventana.h"
#include <QCoreApplication>

/**
 * Constructor de la ventana, en el cual se definen los botones y otros Widgets presentes
 * en la ventana principal, ademas de un pequeño if que ayuda a definir las imagenes
 * en la primera hoja de ejecucion, es decir la primera hoja que se muestra al ejecutar por
 * primera vez el programa
 * Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html
 */

Ventana::Ventana(QWidget *parent) : QMainWindow(parent)
{
    const int dist =10;
    const int x= 182;
    const int y= 268;
    this->resize(778, 894);
    this->setWindowTitle("TecFlix");

    btn1 = new QPushButton("", this);
    btn1->setGeometry(dist, dist+50, x , y);
    connect(btn1,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btn2 = new QPushButton("", this);
    btn2->setGeometry((2*dist+x), dist+50, x, y);
    connect(btn2, &QPushButton::clicked, this, &Ventana::handleBtn2);

    btn3 = new QPushButton("", this);
    btn3->setGeometry((3*dist+2*x), dist+50, x, y);
    connect(btn3, &QPushButton::clicked, this, &Ventana::handleBtn3);

    btn4 = new QPushButton("", this);
    btn4->setGeometry(4*dist+3*x, dist+50, x, y);
    connect(btn4, &QPushButton::clicked, this, &Ventana::handleBtn4);

    btn5 = new QPushButton("", this);
    btn5->setGeometry(dist, dist*2+y+50, x , y);
    connect(btn5, &QPushButton::clicked, this, &Ventana::handleBtn5);

    btn6 = new QPushButton("", this);
    btn6->setGeometry((2*dist+x), dist*2+y+50, x, y);
    connect(btn6, &QPushButton::clicked, this, &Ventana::handleBtn6);

    btn7 = new QPushButton("", this);
    btn7->setGeometry((3*dist+2*x), dist*2+y+50, x, y);
    connect(btn7, &QPushButton::clicked, this, &Ventana::handleBtn7);

    btn8 = new QPushButton("", this);
    btn8->setGeometry(4*dist+3*x, dist*2+y+50, x, y);
    connect(btn8, &QPushButton::clicked, this, &Ventana::handleBtn8);

    btn9 = new QPushButton("", this);
    btn9->setGeometry(dist, dist*3+y*2+50, x , y);
    connect(btn9, &QPushButton::clicked, this, &Ventana::handleBtn9);

    btn10 = new QPushButton("", this);
    btn10->setGeometry((2*dist+x), dist*3+y*2+50, x, y);
    connect(btn10, &QPushButton::clicked, this, &Ventana::handleBtn10);

    btn11 = new QPushButton("", this);
    btn11->setGeometry((3*dist+2*x), dist*3+y*2+50, x, y);
    connect(btn11, &QPushButton::clicked, this, &Ventana::handleBtn11);

    btn12 = new QPushButton("", this);
    btn12->setGeometry(4*dist+3*x, dist*3+y*2+50, x, y);
    connect(btn12, &QPushButton::clicked, this, &Ventana::handleBtn12);

    btnBack = new QPushButton("⇦", this);
    btnBack->setGeometry(5, 5, 50, 20);
    connect(btnBack, &QPushButton::clicked, this, &Ventana::handleAnt);

    btnSig = new QPushButton("⇨", this);
    btnSig->setGeometry(723, 5, 50, 20);
    connect(btnSig, &QPushButton::clicked, this, &Ventana::handleSig);

    if (*Pini==0) {
        p.setPagTotales(*pagTot);
        p.setCantPag(*cantPPag);
        *lAct=p.newpag(*pActual,L);
        pant();
        psig();
        actPenPant(*rutaA);
        *Pini=2;
    }
this->show();
}
/**
 * actPenPant es un metodo que se basa en actualizar los poster de cada uno de los botones por medio de
 * un pixmap, el cual es definido por la ruta recibida y un contador que define la pelicula en el irden en
 * que se recibio
 * @param rutaAct recibe la ruta actual utilizada la cual puede ser rutaA o rutaB dependiendo si se esta
 * migrando a la pagina anterior o siguiente de la que estaba antes en pantalla
 */

void Ventana::actPenPant(string rutaAct) {
    //pagActL.print();

    *lAct=p.newpag(*pActual, L);
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
    }
    qApp->processEvents();

}

/**Metodo pant, realiza la descarga del html, busca en el mismo el url de la imagen y la descarga en
 * una ruta especificada para la pagia anterior, lo hace pidiendo a la clase paginación la lista de
 * peliculas correspondiente a la pagina anterior.
 */
void Ventana::pant() {
    List pagAntL = p.pagant();
    for (int i = 0; i < p.getCantPag(); i++) {
        string data = http.download(pagAntL.obt_by_position(i).getImdb());
        d.download_jpeg(*rutaA, http.getImageURL(data), i);
        string str = to_string(i);
        string rutaL = *rutaA + str + ".jpg";
    }
}

/**Metodo pant, realiza la descarga del html, busca en el mismo el url de la imagen y la descarga en
 * una ruta especificada para la pagia siguiente, lo hace pidiendo a la clase paginación la lista de
 * peliculas correspondiente a la pagina siguiente.
 */
void Ventana::psig() {
    List pagSigL = p.pagsig();
    for (int i = 0; i < p.getCantPag(); i++) {
        string data = http.download(pagSigL.obt_by_position(i).getImdb());
        d.download_jpeg(*rutaB, http.getImageURL(data), i);
        string str = to_string(i);
        string rutaL = *rutaB + str + ".jpg";
    }
}

/**
 * Metodo handleSig se encarga de manejar el evento de el boton de pagina siguiente sumando 1 a la variable
 * pActual la que se encarga de indicar la pagina actual, asimismo llama a los metodos pant()
 * y psig() para que ellos actualicen las imagenes anteriores y siguientes, tambien llama al metodo
 * actPenPant() para que actualice la pantalla con los posters de la pagina actual
 */
int Ventana::handleSig() {
    if (*pActual == *pagTot * *cantPPag) {}
    else {
        *pActual += 1;
        cout << "Pagina: " << *pActual << endl;
        actPenPant(*rutaB);
        pant();
        psig();
        cout<<"Listo"<<endl;

    }
    return 0;
}

/**
 * Metodo handleAnt() se encarga de manejar el evento de el boton de pagina anterior restando 1 a la variable
 * pActual la que se encarga de indicar la pagina actual, asimismo llama a los metodos pant()
 * y psig() para que ellos actualicen las imagenes anteriores y siguientes, tambien llama al metodo
 * actPenPant() para que actualice la pantalla con los posters de la pagina actual
 */
int Ventana::handleAnt() {
    if (*pActual == 1) {}
    else {
        *pActual -= 1;
        cout << "Pagina: " << *pActual << endl;
        actPenPant(*rutaA);
        pant();
        psig();
        cout<<"Lista"<<endl;
    }
    return 0;
}

/**
 * Metodo handleBtn1()
 *
 */
int Ventana::handleBtn1() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(0);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn2() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(1);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn3() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(2);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn4() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(3);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn5() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(4);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn6() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(5);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn7() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(6);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn8() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(7);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn9() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(8);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn10() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(9);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn11() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(10);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn12() {
    *lAct=p.newpag(*pActual, L);
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(11);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}
/**
 * Destructor ~Ventana como su nombre describe, libera de memoria todos los punteros presentes y creados
 * en la Clase Ventana
 */
Ventana::~Ventana() {
    delete(btn1);
    delete(btn2);
    delete(btn3);
    delete(btn4);
    delete(btn5);
    delete(btn6);
    delete(btn7);
    delete(btn8);
    delete(btn9);
    delete(btn10);
    delete(btn11);
    delete(btn12);
    delete(btnBack);
    delete(btnSig);
    delete(pActual);
    delete(cantPPag);
    delete(pelTot);
    delete(pagTot);
    delete(rutaA);
    delete(rutaB);
    delete(Pini);
    delete(ventana2);
    delete(lAct);
}


