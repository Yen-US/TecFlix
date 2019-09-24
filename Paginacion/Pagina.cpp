//
// Created by yenus on 18/9/19.
//

#include "Pagina.h"

List Pagina::newpag(int nump, List pelis) {
    *numPagina=nump;
    *pelisG=pelis;

    for (int i=0; i<cantPag;i++){

        pActL->add_head(pelisG->obt_by_position(((*numPagina-1)*cantPag)+i));
    }
    return * pActL;
}

List Pagina::pagant() {
    if (*numPagina > 1){
        for (int i = 0; i < cantPag; i++) {

            pAntL->add_head(pelisG->obt_by_position(((*numPagina - 2) * cantPag) + i ));
        }

        return *pAntL;
    }
    else if (*numPagina == 1){
        for (int i = 0; i < cantPag; i++) {

            pAntL->add_head(pelisG->obt_by_position(0+ i));
        }

        return *pAntL;
    }
}

List Pagina::pagsig() {
    if (*numPagina<cantPag*pagTotales){
    for (int i=0; i<cantPag;i++){

        pSigL->add_head(pelisG->obt_by_position(((*numPagina)*cantPag)+i));
    }

    return * pSigL;
}
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


