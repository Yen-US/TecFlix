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
/**
 * @brief Ventana2 encargada de presentar información de las peliculas junto a un link a su trailer
 */
class Ventana2: public QMainWindow {
public:
    /**
     * Constructor de la ventana, en el cual se definen los labels y otros Widgets presentes
     * en la ventana, ademas los organiza en la interfaz y asimismo define su estilo de fuente
     * entre otras caracteristicas.
     */
    Ventana2(QWidget *parent=0);
    /**
     * Metodo infoPeli el encargado de recibir la pelicula y asignar la información a sus labels
     * correspondientes por medio de gets a los atributos de la misma pelicula, ademas de almacenar
     * el link obtenido en el puntero link
     * @param peli pelicula para presentar su información
     * @param link link del trailer de la pelicula
     */
    void infoPeli(Pelicula peli,string link);
    /**
     * destructor de la Ventana2, se encarga de liberar la memoria utilizada por la Ventana2 y todos
     * los objetos presentes en ella
     */
    virtual ~Ventana2();
private:
    /**
     * Definición de los widgets utilizados en ventana, ademas definicion e inicializacion de puntero
     * link, encargado de almacenar el link del trailer
     */
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
    string* link = new string("");
    /**
     * metodo handleLink, asociado al boton del Link, abre una pestaña en el navegador con el
     * link del trailer para asi presentarlo en el mismo.
     */
    int handleLink();


};


#endif //TECFLIX_VENTANA2_H
