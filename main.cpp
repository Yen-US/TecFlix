#include "Grafica/ventana.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[]) {
    //Interfaz
    /**
     * @brief Llama a la ventana para ser presentada en pantalla
     */
    QApplication app(argc, argv);
    Ventana ventana;
    Ventana2 ventana2;


    return app.exec();
}