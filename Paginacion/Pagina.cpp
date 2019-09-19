//
// Created by yenus on 18/9/19.
//

#include "Pagina.h"

List Pagina::newpag(int nump, List pelis) {
    *numPagina=nump;
    *pelisG=pelis;

    for (int i=0; i<cantPag;i++){

        pActL->add_head(pelisG->obt_by_position(((*numPagina-1)*cantPag)+i+1));
    }
    return * pActL;
}

List Pagina::pagant() {

    for (int i=0; i<cantPag;i++){

        pAntL->add_head(pelisG->obt_by_position(((*numPagina-2)*cantPag)+i+1));
    }

    return * pAntL;
}

List Pagina::pagsig() {
    for (int i=0; i<cantPag;i++){

        pSigL->add_head(pelisG->obt_by_position(((*numPagina)*cantPag)+i+1));
    }

    return * pSigL;
}

int Pagina::getCantPag() {
    return cantPag;
}

int Pagina::getPagTotales() const {
    return pagTotales;
}

void Pagina::setPagTotales(int pagTotales) {
    Pagina::pagTotales = pagTotales;
}

void Pagina::setCantPag(int cantPag) {
    Pagina::cantPag = cantPag;
}


