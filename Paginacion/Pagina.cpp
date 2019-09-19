//
// Created by yenus on 18/9/19.
//

#include "Pagina.h"

List Pagina::newpag(int nump, int totp, List pelis) {
    List * L = new(List);
    for (int i=0; i<pelPPagina;i++){

        L->add_head(pelis.obt_by_position(((nump-1)*pelPPagina)+i+1));
    }
    return * L;
}

int Pagina::getcantPag() {
    return pelPPagina;
}
