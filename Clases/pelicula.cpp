//
// Created by yenus on 10/9/19.
//
#include <string>
#include <iostream>

using namespace std;

class Pelicula{
    string color;
    string nombre_del_director;
    string num_criticas_por_rev;
    string duracion;
    string likes_face_director;
    string likes_face_act3;
    string nombre_act2;
    string likes_face_act1;
    string ganancia;
    string genero;
    string nombre_act1;
    string titulo;
    string usuarios_votaron;
    string likes_face_cast;
    string nombre_act3;
    string caras_poster;
    string palabras_busqueda;
    string IMDB;
    string usuarios_rev;
    string idioma;
    string pais;
    string contenido;
    string presupuesto;
    string agno;
    string likes_face_act2;
    string imdb_score;
    string aspecto;
    string likes_face_peli;

public:
    Pelicula() {}


    const string &getColor() const {
        return color;
    }

    void setColor(const string &color) {
        Pelicula::color = color;
    }

    const string &getNombreDelDirector() const {
        return nombre_del_director;
    }

    void setNombreDelDirector(const string &nombreDelDirector) {
        nombre_del_director = nombreDelDirector;
    }

    const string &getNumCriticasPorRev() const {
        return num_criticas_por_rev;
    }

    void setNumCriticasPorRev(const string &numCriticasPorRev) {
        num_criticas_por_rev = numCriticasPorRev;
    }

    const string &getDuracion() const {
        return duracion;
    }

    void setDuracion(const string &duracion) {
        Pelicula::duracion = duracion;
    }

    const string &getLikesFaceDirector() const {
        return likes_face_director;
    }

    void setLikesFaceDirector(const string &likesFaceDirector) {
        likes_face_director = likesFaceDirector;
    }

    const string &getLikesFaceAct3() const {
        return likes_face_act3;
    }

    void setLikesFaceAct3(const string &likesFaceAct3) {
        likes_face_act3 = likesFaceAct3;
    }

    const string &getNombreAct2() const {
        return nombre_act2;
    }

    void setNombreAct2(const string &nombreAct2) {
        nombre_act2 = nombreAct2;
    }

    const string &getLikesFaceAct1() const {
        return likes_face_act1;
    }

    void setLikesFaceAct1(const string &likesFaceAct1) {
        likes_face_act1 = likesFaceAct1;
    }

    const string &getGanancia() const {
        return ganancia;
    }

    void setGanancia(const string &ganancia) {
        Pelicula::ganancia = ganancia;
    }

    const string &getGenero() const {
        return genero;
    }

    void setGenero(const string &genero) {
        Pelicula::genero = genero;
    }

    const string &getNombreAct1() const {
        return nombre_act1;
    }

    void setNombreAct1(const string &nombreAct1) {
        nombre_act1 = nombreAct1;
    }

    const string &getTitulo() const {
        return titulo;
    }

    void setTitulo(const string &titulo) {
        Pelicula::titulo = titulo;
    }

    const string &getUsuariosVotaron() const {
        return usuarios_votaron;
    }

    void setUsuariosVotaron(const string &usuariosVotaron) {
        usuarios_votaron = usuariosVotaron;
    }

    const string &getLikesFaceCast() const {
        return likes_face_cast;
    }

    void setLikesFaceCast(const string &likesFaceCast) {
        likes_face_cast = likesFaceCast;
    }

    const string &getNombreAct3() const {
        return nombre_act3;
    }

    void setNombreAct3(const string &nombreAct3) {
        nombre_act3 = nombreAct3;
    }

    const string &getCarasPoster() const {
        return caras_poster;
    }

    void setCarasPoster(const string &carasPoster) {
        caras_poster = carasPoster;
    }

    const string &getPalabrasBusqueda() const {
        return palabras_busqueda;
    }

    void setPalabrasBusqueda(const string &palabrasBusqueda) {
        palabras_busqueda = palabrasBusqueda;
    }

    const string &getImdb() const {
        return IMDB;
    }

    void setImdb(const string &imdb) {
        IMDB = imdb;
    }

    const string &getUsuariosRev() const {
        return usuarios_rev;
    }

    void setUsuariosRev(const string &usuariosRev) {
        usuarios_rev = usuariosRev;
    }

    const string &getLenguaje() const {
        return idioma;
    }

    void setIdioma(const string &idioma) {
        Pelicula::idioma = idioma;
    }

    const string &getPais() const {
        return pais;
    }

    void setPais(const string &pais) {
        Pelicula::pais = pais;
    }

    const string &getContenido() const {
        return contenido;
    }

    void setContenido(const string &contenido) {
        Pelicula::contenido = contenido;
    }

    const string &getPresupuesto() const {
        return presupuesto;
    }

    void setPresupuesto(const string &presupuesto) {
        Pelicula::presupuesto = presupuesto;
    }

    const string &getAgno() const {
        return agno;
    }

    void setAgno(const string &agno) {
        Pelicula::agno = agno;
    }

    const string &getLikesFaceAct2() const {
        return likes_face_act2;
    }

    void setLikesFaceAct2(const string &likesFaceAct2) {
        likes_face_act2 = likesFaceAct2;
    }

    const string &getImdbScore() const {
        return imdb_score;
    }

    void setImdbScore(const string &imdbScore) {
        imdb_score = imdbScore;
    }

    const string &getAspecto() const {
        return aspecto;
    }

    void setAspecto(const string &aspecto) {
        Pelicula::aspecto = aspecto;
    }

    const string &getLikesFacePeli() const {
        return likes_face_peli;
    }

    void setLikesFacePeli(const string &likesFacePeli) {
        likes_face_peli = likesFacePeli;
    }

    void print(Pelicula pelicula) {
        cout << "color: " << pelicula.color << " nombre_del_director: " << pelicula.nombre_del_director
           << " num_criticas_por_rev: " << pelicula.num_criticas_por_rev << " duracion: " << pelicula.duracion
           << " likes_face_director: " << pelicula.likes_face_director << " likes_face_act3: "
           << pelicula.likes_face_act3 << " nombre_act2: " << pelicula.nombre_act2 << " likes_face_act1: "
           << pelicula.likes_face_act1 << " ganancia: " << pelicula.ganancia << " genero: " << pelicula.genero
                                                                                            << " nombre_act1: " << pelicula.nombre_act1 << " titulo: " << pelicula.titulo << " usuarios_votaron: "
                                                                                            << pelicula.usuarios_votaron << " likes_face_cast: " << pelicula.likes_face_cast << " nombre_act3: "
                                                                                            << pelicula.nombre_act3 << " caras_poster: " << pelicula.caras_poster << " palabras_busqueda: "
                                                                                            << pelicula.palabras_busqueda << " IMDB: " << pelicula.IMDB << " usuarios_rev: " << pelicula.usuarios_rev
                                                                                            << " idioma: " << pelicula.idioma << " pais: " << pelicula.pais << " contenido: " << pelicula.contenido
                                                                                            << " presupuesto: " << pelicula.presupuesto << " agno: " << pelicula.agno << " likes_face_act2: "
                                                                                            << pelicula.likes_face_act2 << " imdb_score: " << pelicula.imdb_score << " aspecto: " << pelicula.aspecto
                                                                                            << " likes_face_peli: " << pelicula.likes_face_peli << endl;
    }

    virtual ~Pelicula() {}
};

