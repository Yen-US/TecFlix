#include "Clases/pelicula.cpp"
#include "Archivo_csv/lectura.cpp"
#include "Grafica/pagina.cpp"


using namespace std;

int main(int argc, char *argv[]) {
    //Lectura del .csv
    lectura l;
    List L=l.lect();
    List *ptoList = (List *)malloc(sizeof(L));
    *ptoList=L;

    QApplication app(argc, argv);
    Ventana ventana;
    ventana.resize(800, 300);
    ventana.setWindowTitle("TecFlix");
    ventana.show();

    return app.exec();
}