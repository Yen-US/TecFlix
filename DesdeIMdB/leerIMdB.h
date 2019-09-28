//
// Created by yenus on 15/9/19.
//

#ifndef TECFLIX_LEERIMDB_H
#define TECFLIX_LEERIMDB_H

#include <cstdio>
#include <curl/curl.h>
#include <curl/easy.h>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
/**
 * @brief Un descargador HTTP basado en libcURL simple y no seguro para subprocesos Basado en: http://www.cplusplus.com/forum/beginner/92733/
 */
class HTTPDownloader {
public:
    HTTPDownloader();
    ~HTTPDownloader();
    /**
     * Descarga un archivo usando HTTP GET y lo guarda en un std :: string
     * @param url el URL a descargar
     * @return El redultado de la descarga
     */
    std::string download(const std::string& url);
    /**
     * @brief Toma todo el html y busca en el palabras clave para si encontrar el link de la imagen del poster
     * @param data todo el html donde buscar la imagen
     * @return el string donde esta almacenado el url del link de la imagen
     */
    string getImageURL(string data);
    /**
     * @brief Toma todo el html y busca en el palabras clave para si encontrar el link del trailer de la pelicula
     * @param data todo el html donde buscar el trailer
     * @return el string donde esta almacenado el url del link del poster
     */
    string getTrailerURL(string data);
private:
    void* curl;
};
#endif  /* HTTPDOWNLOADER_HPP */
