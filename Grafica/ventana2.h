//
// Created by yenus on 23/9/19.
//

#ifndef TECFLIX_VENTANA2_H
#define TECFLIX_VENTANA2_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QtGui/QDesktopServices>
#include <QUrl>
#include "../Clases/pelicula.h"

class Ventana2: public QMainWindow {
public:
    Ventana2(QWidget *parent=0);
    void infoPeli(Pelicula peli,string link);
    virtual ~Ventana2();
private:
    QLabel* lblTitulo;
    QPushButton* lblLink;
    QLabel* lblDuracion;
    QLabel* lblDirector;
    QLabel* lblGenero;
    QLabel* lblAct1;
    QLabel* lblAct2;
    QLabel* lblIdioma;
    QLabel* lblPais;
    QLabel* lblAgno;
    QLabel* lblScore;
    QLabel* lblContenido;
    QLabel* lblPresupuesto;
    QLabel* lblGanancia;
    QLabel* lblColor;
    int handleLink();
    string* link = new string("");


};


#endif //TECFLIX_VENTANA2_H
