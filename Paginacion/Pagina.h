//
// Created by yenus on 18/9/19.
//

#ifndef TECFLIX_PAGINA_H
#define TECFLIX_PAGINA_H


#include "../Lista/list.h"

class Pagina {
protected:
    int numPagina = 0;
    int totPaginas = 0;
    int pelPPagina = 12;

public:
    List newpag(int nump, int totp, List pelis);
    int getcantPag ();
};


#endif //TECFLIX_PAGINA_H
