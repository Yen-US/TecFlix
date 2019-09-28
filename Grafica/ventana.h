//
// Created by yenus on 22/9/19.
//
#include <QMainWindow>
#include <QPushButton>
#include <QtWidgets>
#include "../DesdeIMdB/leerIMdB.h"
#include "../DesdeIMdB/descarga.h"
#include "../Lista/list.h"
#include "../Archivo_csv/lectura.cpp"
#include "../Paginacion/Pagina.h"
#include "ventana2.h"


#ifndef TECFLIX_VENTANA_H
#define TECFLIX_VENTANA_H

/**
 * @brief Clase Ventana, presenta las peliculas en pantalla
 */
class Ventana : public QMainWindow
{
public:
/**
 * Constructor de la ventana, en el cual se definen los botones y otros Widgets presentes
 * en la ventana principal, ademas de un pequeño if que ayuda a definir las imagenes
 * en la primera hoja de ejecucion, es decir la primera hoja que se muestra al ejecutar por
 * primera vez el programa
 * Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html
 */
    Ventana(QWidget *parent=0);


    /**
 * Destructor ~Ventana como su nombre describe, libera de memoria todos los punteros presentes y creados
 * en la Clase Ventana
 */
    virtual ~Ventana();

    /**
 * Metodo handleSig se encarga de manejar el evento de el boton de pagina siguiente sumando 1 a la variable
 * pActual la que se encarga de indicar la pagina actual, asimismo llama a los metodos pant()
 * y psig() para que ellos actualicen las imagenes anteriores y siguientes, tambien llama al metodo
 * actPenPant() para que actualice la pantalla con los posters de la pagina actual
 */
    int handleSig();

    /**
 * Metodo handleAnt() se encarga de manejar el evento de el boton de pagina anterior restando 1 a la variable
 * pActual la que se encarga de indicar la pagina actual, asimismo llama a los metodos pant()
 * y psig() para que ellos actualicen las imagenes anteriores y siguientes, tambien llama al metodo
 * actPenPant() para que actualice la pantalla con los posters de la pagina actual
 */
    int handleAnt();

    /**
 * metodo que recibe la llamada para actualizar los botones cuando un usuario acciono un boton de
 * navegación y actualiza los botones con los numeros correspondientes en base a la nueva pagina
 * y ademas actualiza las peliculas en pantalla con base en la pagina escogida por el usuario
 * @param cont
 */
    void actNav(int cont);

    /**
 * Se encarga de manejar y detectar el evento de resize de la ventana
 * @param event
 */
    void resizeEvent(QResizeEvent* event) override;

    /**Metodo psig, realiza la descarga del html, busca en el mismo el url de la imagen y la descarga en
 * una ruta especificada para la pagina siguiente, lo hace pidiendo a la clase paginación la lista de
 * peliculas correspondiente a la pagina siguiente.
 */
    void psig();

    /**Metodo pant, realiza la descarga del html, busca en el mismo el url de la imagen y la descarga en
 * una ruta especificada para la pagina anterior, lo hace pidiendo a la clase paginación la lista de
 * peliculas correspondiente a la pagina anterior.
 */
    void pant();
    /**
     * variante del psig y pant que se encarga e realizar lo mismo es decir descargar las imagenes y
     * asignarlas al puntero ruta para despues ser utilizadas como la pagina actual, utilizada cuando
     * se quiere ir a una pagina que no esta precargada en memoria
     */
    void pact();
    /**
 * actPenPant es un metodo que se basa en actualizar los poster de cada uno de los botones por medio de
 * un pixmap, el cual es definido por la ruta recibida y un contador que define la pelicula en el irden en
 * que se recibio
 * @param rutaAct recibe la ruta actual utilizada la cual puede ser rutaA o rutaB dependiendo si se esta
 * migrando a la pagina anterior o siguiente de la que estaba antes en pantalla
 */
    void actPenPant(string ruta);

private:
    /**
     * Definición de todos los botones a utilizar en la ventana
     */
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
    QPushButton* btnN1;
    QPushButton* btnN2;
    QPushButton* btnN3;
    QPushButton* btnN4;
    QPushButton* btnN5;
    QPushButton* btnN6;
    QPushButton* btnN7;
    QPushButton* btnN8;
    QPushButton* btnN9;
    QPushButton* btnN10;
    QPushButton* btnAtras;
    QPushButton* btnDel;
    QPushButton* btnBack;
    QPushButton* btnSig;
/**
 * Metodos que se encargan de manejar los eventos de cada boton individualmente
 * usados para presentar en pantalla la informacion de la pelicula junto al link al trailer de
 * la misma
 *
 */
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




/**
 * metodos que manejan los botones de navegación, se encargan de llamar el metodo actNav(intcont)
 */
    int handleN1();
    int handleN2();
    int handleN3();
    int handleN4();
    int handleN5();
    int handleN6();
    int handleN7();
    int handleN8();
    int handleN9();
    int handleN10();


/**
 * metodos handleAtras() y handleDel() se encargan de manejar el avance de paginas en botones de
 * navegación, ambos solo actualizan los numeros presentes en los botones
 */
    int handleAtras();
    int handleDel();

    /**
     * Definición de punteros, objetos y variables utilizadas globalmente en la clase, en algunas
     * ocaciones inicializadas.
     */
    int *pActual= new int (0);
    lectura l;
    HTTPDownloader http;
    Pagina p;
    int *cantPPag=new int (12);
    List L = l.lect();
    int *pelTot=new int (L.cant());
    int *pagTot=new int (*pelTot/ *cantPPag);
    string* rutaA=new string("/home/yenus/CLionProjects/TecFlix/pstA");
    string* rutaB=new string("/home/yenus/CLionProjects/TecFlix/pstB");
    string* ruta=new string("/home/yenus/CLionProjects/TecFlix/pst");
    int Pini=0;
    descarga d;
    const int dist =10;
    const int x= 182;
    const int y= 268;
    Ventana2 *ventana2;
    List *lAct=new List();

};


#endif //TECFLIX_VENTANA_H
