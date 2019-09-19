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
/*
    lectura l;
    List L=l.lect();
    int cantPel=L.cant();
    L.print();
    Pelicula peli1=L.obt_by_position(5000);
    cout<<"\n"+peli1.getImdb()<<endl;
    Pagina p;
    p.newpag(3,cantPel, L).print();*/



    /*HTTPDownloader downloader;
    string content = downloader.download("http://www.imdb.com/title/tt0814255/?ref_=fn_tt_tt_1");
    //cout << content << endl;
    //cout<< "\n"+downloader.getImageURL(content)<<endl;
    jpeg j;
    j.download_jpeg("https://m.media-amazon.com/images/M/MV5BMTYwOTEwNjAzMl5BMl5BanBnXkFtZTcwODc5MTUwMw@@._V1_UY1200_CR90,0,630,1200_AL_.jpg",1);
    cout<< "\n"+downloader.getTrailerURL(content)<<endl;*/

    return app.exec();
}