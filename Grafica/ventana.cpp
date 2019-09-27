//
// Created by yenus on 22/9/19.
//

#include "ventana.h"
#include <QCoreApplication>



Ventana::Ventana(QWidget *parent) : QMainWindow(parent)
{
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

    btnAtras = new QPushButton("⇠", this);
    btnAtras->setGeometry(65, 5, 20, 20);
    connect(btnAtras, &QPushButton::clicked, this, &Ventana::handleAtras);

    btnDel = new QPushButton("⇢", this);
    btnDel->setGeometry(440, 5, 20, 20);
    connect(btnDel, &QPushButton::clicked, this, &Ventana::handleDel);

    btnN1 = new QPushButton("0", this);
    btnN1->setGeometry(90, 5, 30, 20);
    btnN1->setFont(QFont("Ubuntu", 11,75));
    connect(btnN1, &QPushButton::clicked, this, &Ventana::handleN1);

    btnN2 = new QPushButton("1", this);
    btnN2->setGeometry(125, 5, 30, 20);
    connect(btnN2, &QPushButton::clicked, this, &Ventana::handleN2);

    btnN3 = new QPushButton("2", this);
    btnN3->setGeometry(160, 5, 30, 20);
    connect(btnN3, &QPushButton::clicked, this, &Ventana::handleN3);

    btnN4 = new QPushButton("3", this);
    btnN4->setGeometry(195, 5, 30, 20);
    connect(btnN4, &QPushButton::clicked, this, &Ventana::handleN4);

    btnN5 = new QPushButton("4", this);
    btnN5->setGeometry(230, 5, 30, 20);
    connect(btnN5, &QPushButton::clicked, this, &Ventana::handleN5);

    btnN6 = new QPushButton("5", this);
    btnN6->setGeometry(265, 5, 30, 20);
    connect(btnN6, &QPushButton::clicked, this, &Ventana::handleN6);

    btnN7 = new QPushButton("6", this);
    btnN7->setGeometry(300, 5, 30, 20);
    connect(btnN7, &QPushButton::clicked, this, &Ventana::handleN7);

    btnN8 = new QPushButton("7", this);
    btnN8->setGeometry(335, 5, 30, 20);
    connect(btnN8, &QPushButton::clicked, this, &Ventana::handleN8);

    btnN9 = new QPushButton("8", this);
    btnN9->setGeometry(370, 5, 30, 20);
    connect(btnN9, &QPushButton::clicked, this, &Ventana::handleN9);

    btnN10 = new QPushButton("9", this);
    btnN10->setGeometry(405, 5, 30, 20);
    connect(btnN10, &QPushButton::clicked, this, &Ventana::handleN10);

    if (Pini==0) {
        p.setPagTotales(*pagTot);
        p.setCantPag(*cantPPag);
        pact();
        actPenPant(*ruta);
        psig();
        Pini=2;
    }
this->show();
}


void Ventana::actPenPant(string rutaAct) {

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
        remove(rutaL.c_str());
    }
    actNav(2);
    qApp->processEvents();


}


void Ventana::pant() {
    List pagAntL = p.pagant();
    for (int i = 0; i < p.getCantPag(); i++) {
        string data = http.download(pagAntL.obt_by_position(i).getImdb());
        d.download_jpeg(*rutaA, http.getImageURL(data), i);
        string str = to_string(i);
        string rutaL = *rutaA + str + ".jpg";

    }
    cout<<"Lista pAnt"<<endl;
}


void Ventana::psig() {
    List pagSigL = p.pagsig();
    for (int i = 0; i < p.getCantPag(); i++) {
        string data = http.download(pagSigL.obt_by_position(i).getImdb());
        d.download_jpeg(*rutaB, http.getImageURL(data), i);
        string str = to_string(i);
        string rutaL = *rutaB + str + ".jpg";

    }
    cout<<"Listo pSig"<<endl;
}

void Ventana::pact() {
    List pagActL = p.newpag(*pActual, L);
    for (int i = 0; i < p.getCantPag(); i++) {
        string data = http.download(pagActL.obt_by_position(i).getImdb());
        d.download_jpeg(*ruta, http.getImageURL(data), i);
        string str = to_string(i);
        string rutaL = *ruta + str + ".jpg";

    }
    cout<<"Listo pAct"<<endl;
}


int Ventana::handleSig() {
    if (*pActual<*pagTot) {
        *pActual += 1;
        cout << "Pagina: " << *pActual << endl;
        actPenPant(*rutaB);
        pant();
        psig();
        return 0;
    }else{}
}


int Ventana::handleAnt() {
    if (*pActual == 0) {}
    else if(*pActual == 1){
        *pActual -= 1;
        cout << "Pagina: " << *pActual << endl;
        actPenPant(*rutaA);
        psig();

    }
    else {
        *pActual -= 1;
        cout << "Pagina: " << *pActual << endl;
        actPenPant(*rutaA);
        pant();
        psig();
    }
    return 0;
}

/**
 * Metodo handleBtn1()
 *
 */
int Ventana::handleBtn1() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(0);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn2() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(1);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn3() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(2);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn4() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(3);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn5() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(4);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn6() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(5);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn7() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(6);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn8() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(7);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn9() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(8);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn10() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(9);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn11() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(10);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleBtn12() {
    ventana2=new Ventana2();
    Pelicula peliAct=lAct->obt_by_position(11);
    ventana2->infoPeli(peliAct,http.getTrailerURL(http.download(peliAct.getImdb())));
    ventana2->show();
    return 0;
}

int Ventana::handleN1() {
    actNav(1);
    return 0;
}

int Ventana::handleN2() {
    *pActual=*pActual+1;
    actNav(1);
    return 0;
}

int Ventana::handleN3() {
    *pActual=*pActual+2;
    actNav(1);
    return 0;
}

int Ventana::handleN4() {
    *pActual=*pActual+3;
    actNav(1);
    return 0;
}

int Ventana::handleN5() {
    *pActual=*pActual+4;
    actNav(1);
    return 0;
}

int Ventana::handleN6() {
    *pActual=*pActual+5;
    actNav(1);
    return 0;
}

int Ventana::handleN7() {
    *pActual=*pActual+6;
    actNav(1);
    return 0;
}

int Ventana::handleN8() {
    *pActual=*pActual+7;
    actNav(1);
    return 0;
}

int Ventana::handleN9() {
    *pActual=*pActual+8;
    actNav(1);
    return 0;
}

int Ventana::handleN10() {
    *pActual=*pActual+9;
    actNav(1);
    return 0;
}

void Ventana::actNav(int cont){
    btnN1->setText(to_string(*pActual).c_str());
    btnN1->setFont(QFont("Ubuntu", 11, 75));

    btnN2->setText(to_string(*pActual + 1).c_str());

    btnN3->setText(to_string(*pActual + 2).c_str());

    btnN4->setText(to_string(*pActual + 3).c_str());

    btnN5->setText(to_string(*pActual + 4).c_str());

    btnN6->setText(to_string(*pActual + 5).c_str());

    btnN7->setText(to_string(*pActual + 6).c_str());

    btnN8->setText(to_string(*pActual + 7).c_str());

    btnN9->setText(to_string(*pActual + 8).c_str());

    btnN10->setText(to_string(*pActual + 9).c_str());
    if (cont==1){
        pact();
        actPenPant(*ruta);
        pant();
        psig();
    }else{}

}

int Ventana::handleDel() {
    if (*pActual<*pagTot-19) {
        *pActual = *pActual + 10;
        btnN1->setText(to_string(*pActual).c_str());
        btnN1->setFont(QFont("Ubuntu", 11, 50));

        btnN2->setText(to_string(*pActual + 1).c_str());

        btnN3->setText(to_string(*pActual + 2).c_str());

        btnN4->setText(to_string(*pActual + 3).c_str());

        btnN5->setText(to_string(*pActual + 4).c_str());

        btnN6->setText(to_string(*pActual + 5).c_str());

        btnN7->setText(to_string(*pActual + 6).c_str());

        btnN8->setText(to_string(*pActual + 7).c_str());

        btnN9->setText(to_string(*pActual + 8).c_str());

        btnN10->setText(to_string(*pActual + 9).c_str());
    }else{}
    return 0;
}

int Ventana::handleAtras() {
    if (*pActual>9) {
        *pActual = *pActual - 10;
        btnN1->setText(to_string(*pActual).c_str());
        btnN1->setFont(QFont("Ubuntu", 11, 50));

        btnN2->setText(to_string(*pActual + 1).c_str());

        btnN3->setText(to_string(*pActual + 2).c_str());

        btnN4->setText(to_string(*pActual + 3).c_str());

        btnN5->setText(to_string(*pActual + 4).c_str());

        btnN6->setText(to_string(*pActual + 5).c_str());

        btnN7->setText(to_string(*pActual + 6).c_str());

        btnN8->setText(to_string(*pActual + 7).c_str());

        btnN9->setText(to_string(*pActual + 8).c_str());

        btnN10->setText(to_string(*pActual + 9).c_str());
    }else{}
    return 0;
}

void Ventana::resizeEvent(QResizeEvent* event){
    int width =event->size().width();
    int height =event->size().height();

    if (width<=(10*dist+10*x)){
        //diez pelis horizontal
    }else if (width<=(10*dist+10*x) && width>(9*dist+9*x)){
        //nueve pelis horizontal
    }else if (width<=(9*dist+9*x) && width>(8*dist+8*x)){
        //ocho pelis horizontal
    }else if (width<=(8*dist+8*x) && width>(7*dist+7*x)){
        //siete pelis horizontal
    }else if (width<=(7*dist+7*x) && width>(6*dist+6*x)){
        //seis pelis horizontal
    }else if (width<=(6*dist+6*x) && width>(5*dist+5*x)){
        //cinco pelis horizontal
    }else if (width<=(5*dist+5*x) && width>(4*dist+4*x)){
        //Cuatro pelis horizontal
    }else if (width<=(4*dist+4*x) && width>(3*dist+3*x)){
        //tres pelis horizontal
    }else if (width<=(3*dist+3*x) && width>(2*dist+2*x)){
        //dos pelis horizontal
    }else if (width<=(2*dist+2*x) && width>(1*dist+1*x)){
        //una peli horizontal
    }

    if (height<=947 && height>dist*3+y*3+50){
        //tres pelis vertical
    }else if (height<=dist*3+y*3+50 && height>dist*2+y*2+50){
        //dos pelis vertical
    }else if (height<=dist*2+y*2+50 && height>dist*1+y*1+50){
        //una peli vertical
    }
}

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
    delete(ventana2);
    delete(lAct);
}