//
// Created by yenus on 23/9/19.
//


#include "ventana2.h"

Ventana2::Ventana2(QWidget *parent) {
    this->resize(389, 460);
    this->setWindowTitle("TecFlix");

    lblTitulo = new QLabel(this);
    lblTitulo->setGeometry(10, 5, 369, 25);
    lblTitulo->setFont(QFont("Calibri", 12,75));
    lblTitulo->setText("Titulo de la pelicula");

    lblLink = new QPushButton("Link del Trailer", this);
    lblLink->setGeometry(10, 40, 369, 25);
    lblLink->setFont(QFont("Calibri", 10,25));

    lblGenero = new QLabel(this);
    lblGenero->setGeometry(10, 70, 369, 25);
    lblGenero->setFont(QFont("Calibri", 10,25));
    lblGenero->setText("Genero de la pelicula");

    lblIdioma = new QLabel(this);
    lblIdioma->setGeometry(10, 100, 369, 25);
    lblIdioma->setFont(QFont("Calibri", 10,25));
    lblIdioma->setText("Idioma de la pelicula");

    lblDuracion = new QLabel(this);
    lblDuracion->setGeometry(10, 130, 369, 25);
    lblDuracion->setFont(QFont("Calibri", 10,25));
    lblDuracion->setText("Duracion de la pelicula");

    lblAgno = new QLabel(this);
    lblAgno->setGeometry(10, 160, 369, 25);
    lblAgno->setFont(QFont("Calibri", 10,25));
    lblAgno->setText("Año de la pelicula");

    lblPais = new QLabel(this);
    lblPais->setGeometry(10, 190, 369, 25);
    lblPais->setFont(QFont("Calibri", 10,25));
    lblPais->setText("Pais de la pelicula");

    lblContenido = new QLabel(this);
    lblContenido->setGeometry(10, 220, 369, 25);
    lblContenido->setFont(QFont("Calibri", 10,25));
    lblContenido->setText("Contenido de la pelicula");

    lblPresupuesto = new QLabel(this);
    lblPresupuesto->setGeometry(10, 250, 369, 25);
    lblPresupuesto->setFont(QFont("Calibri", 10,25));
    lblPresupuesto->setText("Presupuesto de la pelicula");

    lblGanancia = new QLabel(this);
    lblGanancia->setGeometry(10, 280, 369, 25);
    lblGanancia->setFont(QFont("Calibri", 10,25));
    lblGanancia->setText("Ganancia de la pelicula");

    lblDirector= new QLabel(this);
    lblDirector->setGeometry(10, 310, 369, 25);
    lblDirector->setFont(QFont("Calibri", 10,25));
    lblDirector->setText("Director de la pelicula");

    lblColor= new QLabel(this);
    lblColor->setGeometry(10, 340, 369, 25);
    lblColor->setFont(QFont("Calibri", 10,25));
    lblColor->setText("Color de la pelicula");

    lblAct1= new QLabel(this);
    lblAct1->setGeometry(10, 370, 369, 25);
    lblAct1->setFont(QFont("Calibri", 10,25));
    lblAct1->setText("Actor Principal de la pelicula");

    lblAct2= new QLabel(this);
    lblAct2->setGeometry(10, 400, 369, 25);
    lblAct2->setFont(QFont("Calibri", 10,25));
    lblAct2->setText("Actor Secundario de la pelicula");

    lblScore= new QLabel(this);
    lblScore->setGeometry(10, 430, 369, 25);
    lblScore->setFont(QFont("Calibri", 10,25));
    lblScore->setText("Score de IMdB de la pelicula");









}

Ventana2::~Ventana2() {
}

void Ventana2::infoAct(Pelicula peli) {

}
