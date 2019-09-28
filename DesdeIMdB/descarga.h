//
// Created by yenus on 23/9/19.
//

#ifndef TECFLIX_DESCARGA_H
#define TECFLIX_DESCARGA_H

#include <cstdio>
#include <curl/curl.h>
#include <string>
using namespace std;
/**
 * @brief Clase descarga encargada de manejar la descarga de imagenes
 */
class descarga {
public:
    /**
     * @brief Metodo download_jpeg encargado de descarga la imagen en formato .jpg
     * @param ruta recibe la ruta en la que debe almacenar las imagenes
     * @param url url perteneciente a la imagen a descargar
     * @param i contador i el que va a ser concatenado a la ruta y asi hacerla mas facil de accesar
     */
    bool download_jpeg(string ruta,string url,int i);
};


#endif //TECFLIX_DESCARGA_H
