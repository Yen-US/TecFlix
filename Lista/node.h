#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;


class Node
{
    public:
        Node();
        Node(Pelicula p);
        ~Node();

        Node *next;
        Pelicula data;

        void delete_all();
        void print(Pelicula p);
};

#endif // NODE_H
