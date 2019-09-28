//
// Created by yenus on 16/9/19.
//

#ifndef TECFLIX_PELICULA_H
#define TECFLIX_PELICULA_H

#include <string>
#include <iostream>
using namespace std;
/**
 * @brief Clase Pelicula, define las peliculas, las cuales son obtenidas del archivo.csv
 */
class Pelicula {
protected:
/**
 * @brief Indica Si la peicula se encuentra a color o en blanco y negro
 */
    string color;
    /**
     * @brief Indica el nombre del director de la pelicula
     */
    string nombre_del_director;//
    /**
     * @brief Indica el número de criticas por cada revisión
     */
    string num_criticas_por_rev;
    /**
     * @brief Indica la duración total en minutos de la pelicula
     */
    string duracion;
    /**
     * @brief Indica los likes de facebook del director
     */
    string likes_face_director;
    /**
     * @brief Indica los likes en Facebook del actor #3
     */
    string likes_face_act3;
    /**
     * @brief Indica el nombre del actor #2
     */
    string nombre_act2;//
    /**
     * @brief Indica los likes en facebook del actor #1
     */
    string likes_face_act1;
    /**
     * @brief Indica la ganancia neta de la pelicula en Dolares
     */
    string ganancia;//
    /**
     * @brief Indica el genero al que pertenece la pelicula
     */
    string genero;//
    /**
     * @brief Indica el nombre del actor #1
     */
    string nombre_act1;//
    /**
     * @brief Almacena el nombre de la pelicula
     */
    string titulo;//
    /**
     * @brief Indica la cantidad de usuarios que votaron la pelicula
     */
    string usuarios_votaron;
    /**
     * @brief Indica los likes en facebook de todo el cast
     */
    string likes_face_cast;
    /**
     * @brief Indica el nobre del actor #3
     */
    string nombre_act3;//
    /**
     * @brief Indica la cantidad de caras presentes en el poster de la pelicua
     */
    string caras_poster;
    /**
     * @brief Almacena las palabras clave de busqueda
     */
    string palabras_busqueda;
    /**
     * @brief Almacena el link a IMdB de la pelicula
     */
    string IMDB;//
    /**
     * @brief Indica los usuarios que realizaron una revision de la pelicula
     */
    string usuarios_rev;
    /**
     * @brief Indica el idioma de la pelicula
     */
    string idioma;//
    /**
     * @brief Almacena el pais donde fue producida la pelicula
     */
    string pais;//
    /**
     * @brief Indica el contenido de la pelicula
     */
    string contenido;//
    /**
     * @brief Almacena el presupuesto de la pelicula en dolares Estadounidenses
     */
    string presupuesto;//
    /**
     * @brief Indica el año de la pelicula
     */
    string agno;//
    /**
     * @brief Indica los likes en facebook del actor #2
     */
    string likes_face_act2;
    /**
     * @brief Indica la calificacion de la pelicula en IMdB
     */
    string imdb_score;//
    /**
     * @brief Indica la relación de aspecto de la pelicula
     */
    string aspecto;//
    /**
     * @brief Almacena los likes en facebook totales de la pelicula
     */
    string likes_face_peli;//
public:
    /**
     * @return Si la peicula se encuentra a color o en blanco y negro
     */
    const string &getColor() const;

    void setColor(const string &color);
/**
     * @return Nombre del director
     */
    const string &getNombreDelDirector() const;

    void setNombreDelDirector(const string &nombreDelDirector);
/**
     * @return retorna el numero de criticas por cada revision realizada
     */
    const string &getNumCriticasPorRev() const;

    void setNumCriticasPorRev(const string &numCriticasPorRev);
/**
     * @return Indica la duración de la pelicula
     */
    const string &getDuracion() const;

    void setDuracion(const string &duracion);
/**
     * @return La cantidad de likes en facebook del director de la pelicula
     */
    const string &getLikesFaceDirector() const;

    void setLikesFaceDirector(const string &likesFaceDirector);
/**
     * @return La cantidad de likes en facebook del actor #3
     */
    const string &getLikesFaceAct3() const;

    void setLikesFaceAct3(const string &likesFaceAct3);
/**
     * @return La cantidad de likes en facebook del actor #2
     */
    const string &getNombreAct2() const;

    void setNombreAct2(const string &nombreAct2);
/**
     * @return La cantidad de likes en facebook del actor #1
     */
    const string &getLikesFaceAct1() const;

    void setLikesFaceAct1(const string &likesFaceAct1);
/**
     * @return La ganancia neta de la pelicula
     */
    const string &getGanancia() const;

    void setGanancia(const string &ganancia);
/**
     * @return El genero al que pertenece la pelicula
     */
    const string &getGenero() const;

    void setGenero(const string &genero);
/**
     * @return El nombre del actor #1
     */
    const string &getNombreAct1() const;

    void setNombreAct1(const string &nombreAct1);
/**
     * @return El nombre de la pelicula
     */
    const string &getTitulo() const;

    void setTitulo(const string &titulo);
/**
     * @return La cantidad de usuarios que votaron
     */
    const string &getUsuariosVotaron() const;

    void setUsuariosVotaron(const string &usuariosVotaron);
/**
     * @return La cantidad de likes en facebook del cast completo de la pelicula
     */
    const string &getLikesFaceCast() const;

    void setLikesFaceCast(const string &likesFaceCast);
/**
     * @return El nombre del actor #3
     */
    const string &getNombreAct3() const;

    void setNombreAct3(const string &nombreAct3);
/**
     * @return La cantidad de caras en el poster
     */
    const string &getCarasPoster() const;

    void setCarasPoster(const string &carasPoster);
/**
     * @return Las palabras de busqueda claves
     */
    const string &getPalabrasBusqueda() const;

    void setPalabrasBusqueda(const string &palabrasBusqueda);
/**
     * @return El link de la pelicula en IMdB
     */
    const string &getImdb() const;

    void setImdb(const string &imdb);
/**
     * @return La cantidad de usuarios que realizaron una revivision
     */
    const string &getUsuariosRev() const;

    void setUsuariosRev(const string &usuariosRev);
/**
     * @return El idioma de la pelicula
     */
    const string &getIdioma() const;

    void setIdioma(const string &idioma);
/**
     * @return El pais de la pelicula
     */
    const string &getPais() const;

    void setPais(const string &pais);
/**
     * @return El contenido presente en la pelicula
     */
    const string &getContenido() const;

    void setContenido(const string &contenido);
/**
     * @return El presupuesto total de la pelicula
     */
    const string &getPresupuesto() const;

    void setPresupuesto(const string &presupuesto);
/**
     * @return El Año de salida de la pelicula
     */
    const string &getAgno() const;

    void setAgno(const string &agno);
/**
     * @return Los likes en facebook del Actor #2
     */
    const string &getLikesFaceAct2() const;

    void setLikesFaceAct2(const string &likesFaceAct2);
/**
     * @return La calificación de la pelicula en IMdB
     */
    const string &getImdbScore() const;

    void setImdbScore(const string &imdbScore);
/**
     * @return EL ratio de aspecto de la pelicula
     */
    const string &getAspecto() const;

    void setAspecto(const string &aspecto);
/**
     * @return Likes de la pelicula en Facebook
     */
    const string &getLikesFacePeli() const;

    void setLikesFacePeli(const string &likesFacePeli);
/**
     * @brief print en consola de todos los atributos de la pelicula
     */
    void print(Pelicula pelicula);
};


#endif //TECFLIX_PELICULA_H
