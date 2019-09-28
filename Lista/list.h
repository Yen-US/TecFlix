#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "node.h"

/**
 * @brief Clase Lista, define la estructura de datos de lista enlazada en la cual se van a almacenar Peliculas, Basado en: https://github.com/ronnyml/C-Tutorial-Series/tree/master/Listas_enlazadas
 */
class List
{
    public:
        List();
        ~List();
/**
 * @brief Metodo para agregar Peliculas al final de la lista
 * @param p Pelicula a Almacenar
 */
        void add_head(Pelicula p);
        /**
         * @brief Metodo para obtener una impresion en consola de la Lista
         */
        void print();
        /**
         * @brief Metodo para obtener un Nodo por su posicion en la Lista
         * @param pos entero que indica la posicion
         * @return La pelicula en tal posicion indicada
         */
        Pelicula obt_by_position(int pos);
        /**
         * @brief metodo cant usado para obtener la cantidad total de nodos
         * @return retorna la cantidad total de nodos en la lista
         */
        int cant();

    private:
        Node* m_head;
        int m_num_nodes;
};

#endif // LIST_H
