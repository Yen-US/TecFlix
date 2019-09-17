// Created by yenus on 15/9/19.

class Pagina{
    int cantidadPel;
    int cantidadPag=12;
    int paginaActual;
    List pelis;
    List *ptoListAnt;
    List *ptoListAct;
    List *ptoListSig;

public:
    Pagina(int cantidadPel, const List &pelis) : cantidadPel(cantidadPel),pelis(pelis) {}

    List nuevaPag(int pAct){
        paginaActual=pAct;
        List lPagAct;
        if (paginaActual>1 && paginaActual<cantidadPel) {
            for (int i; i < cantidadPag + 1; i++) {
                lPagAct.add_head(pelis.obt_by_position((paginaActual - 1) * cantidadPag +i));
            }
        }

        List *ptoListAct = (List *)malloc(sizeof(lPagAct));
        *ptoListAct = lPagAct;
    }

    List getAnt() {
        List lPagAnt;
        if (paginaActual > 2 && paginaActual<cantidadPel) {
            for (int i; i < cantidadPag + 1; i++) {
                lPagAnt.add_head(pelis.obt_by_position((paginaActual - 2) * cantidadPag + i));
            }
            List *ptoListAnt = (List *) malloc(sizeof(lPagAnt));
            *ptoListAnt = lPagAnt;
        }
    }

    List getSig() {
        List lPagSig;
        if (paginaActual<cantidadPel) {
            for (int i; i < cantidadPag + 1; i++) {
                lPagSig.add_head(pelis.obt_by_position((paginaActual) * cantidadPag + i));
            }
            List *ptoListSig = (List *) malloc(sizeof(lPagSig));
            *ptoListSig = lPagSig;
        }
    }

    void setCantidadporPag(int cantAct){
        cantidadPag=cantAct;
    }
    int getCantidadporPag(){
        return cantidadPag;
    }

    ~Pagina(){
        free(ptoListAnt);
        free(ptoListAct);
        free(ptoListSig);
    }

};