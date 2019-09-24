//
// Created by yenus on 22/9/19.
//
#include <QMainWindow>
#include <QPushButton>
#include "../DesdeIMdB/leerIMdB.h"
#include "../DesdeIMdB/descarga.h"
#include "../Lista/list.h"
#include "../Archivo_csv/lectura.cpp"
#include "../Paginacion/Pagina.h"
#include "ventana2.h"


#ifndef TECFLIX_VENTANA_H
#define TECFLIX_VENTANA_H


class Ventana : public QMainWindow
{
public:

    Ventana(QWidget *parent=0);

    virtual ~Ventana();


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

    int handleBtn1();
    int handleBtn2();
    int handleBtn3();
    int handleBtn4();
    int handleBtn5();
    int handleBtn6();
    int handleBtn7();
    int handleBtn8();
    int handleBtn9();
    int handleBtn10();
    int handleBtn11();
    int handleBtn12();
    int handleSig();
    int handleAnt();

    QPushButton* btnBack;
    QPushButton* btnSig;
    int *pActual= new int (1);
    lectura l;
    HTTPDownloader http;
    Pagina p;
    int *cantPPag=new int (12);
    List L = l.lect();
    int *pelTot=new int (L.cant());
    int *pagTot=new int ((*pelTot/ *cantPPag)-1);
    string* rutaA=new string("/home/yenus/CLionProjects/TecFlix/pstA");
    string* rutaB=new string("/home/yenus/CLionProjects/TecFlix/pstB");
    void psig();
    void pant();
    int *Pini=new int(0);
    descarga d;
    void actPenPant(string ruta);
    Ventana2 *ventana2;
    List *lAct=new List();
};


#endif //TECFLIX_VENTANA_H
