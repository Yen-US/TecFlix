#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "../Clases/pelicula.h"
/**
 * @brief Clase Nodo, define los nodos pelicula
 */
class Node
{
    public:
        Node();
        /**
         * @brief Constructor nodo, define un nodo con su data Pelicula
         * @param p Pelicula a almacebar en tal nodo
         */
        Node(Pelicula p);
        ~Node();

        Node *next;
        Pelicula data;

        void delete_all();
        void print(Pelicula p);
};

#endif // NODE_H
