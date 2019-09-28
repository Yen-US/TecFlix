//
// Created by yenus on 18/9/19.
//

#ifndef TECFLIX_PAGINA_H
#define TECFLIX_PAGINA_H


#include "../Lista/list.h"
/**
 * @brief Encargada de dividir la lista de Peliculas en paginas de tamaño fijo
 */
class Pagina {
public:
    /**
     * @brief Indica el numero de pagina actual el cual se actualiza en el metodo newpag
     */
    int *numPagina =new int(0);
    /**
     * @brief Indica la cantidad de peliculas por pagina
     */
    int cantPag = 12;
    /**
     * @brief Almacena la cantidad de paginas totales y es actualizado en el setPagTotales
     */
    int pagTotales = 5000;
    /**
     * @brief Almacena la lista entera de peliculas se actualiza en el metodo newpag
     */
    List* pelisG = new(List);
    /**
     * @brief Encargado de tomar la lista de paginas correspondiente a la pagina actual
     * @param nump numero de pagina
     * @param pelis Lista total de peliculas
     * @return Lista de las peliculas que estan actualmente en pantalla
     */
    List newpag(int nump, List pelis);
    /**
     * @brief Define la lista de peliculas anterior a la pagina actual
     * @return La lista de peliculas que se encuentra en la pagina anterior
     */
    List pagant();
    /**
     * @brief Define la lista de peliculas siguiente a la pagina actual
     * @return La lista de peliculas que se encuentra en la pagina siguiente
     */
    List pagsig();
    /**
     * @return Cantidad de peliculas por pagina
     */
    int getCantPag ();
    /**
     * @param pagTotales Actualiza la cantidad de paginas totales
     */
    void setPagTotales(int pagTotales);
    /**
     * @param cantPag Actualiza la cantidad de peliculas por pagina
     */
    void setCantPag(int cantPag);
};


#endif //TECFLIX_PAGINA_H
