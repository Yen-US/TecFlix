#include "Grafica/ventana.cpp"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[]) {
    //Interfaz
    QApplication app(argc, argv);
    Ventana ventana;
    ventana.resize(778, 894);
    ventana.setWindowTitle("TecFlix");
    ventana.show();

    return app.exec();
}