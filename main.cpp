#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    ifstream lectura;
    lectura.open("/home/yenus/CLionProjects/TecFlix/movie_metadata.csv");
    cout << "va bien"<<endl;
    string linea;
    for (int fila = 0; getline(lectura, linea); ++fila)
    {
        cout << "entro " << fila <<endl;
        istringstream Linea(linea);
        string dato;
        if (fila == 0){}
        else{
        for (int columna = 0; getline(Linea, dato, ','); ++columna)
        {
            switch (columna) {
                case 0: // color
                    cout << dato + " :color" << endl;
                    break;
                case 1: // director_name
                    cout << dato + " :nombre director" << endl;
                    break;
                case 2: // num_critic_for_reviews
                    cout << dato + " :numero de criticas " << endl;
                    break;
                case 3: // duration
                    cout << dato + " :duración" << endl;
                    break;
                case 4: // director_facebook_likes
                    cout << dato + " :numero de likes director facebook" << endl;
                    break;
                case 5: // actor_3_facebook_likes
                    cout << dato + " :likes facebook actor 3" << endl;
                    break;
                case 6: // actor_2_name
                    cout << dato + " :nombre actor 2" << endl;
                    break;
                case 7: // actor_1_facebook_likes
                    cout << dato + " :likes actor 1" << endl;
                    break;
                case 8: // gross
                    cout << dato + " :grueso " << endl;
                    break;
                case 9: // genres
                    cout << dato + " :generos" << endl;
                    break;
                case 10: // actor_1_name
                    cout << dato + " :nombre actor 1" << endl;
                    break;
                case 11: //movie_title
                    cout << dato + " :titulo" << endl;
                    break;
                case 12: //num_voted_users
                    cout << dato + " :usuarios votados"<< endl;
                    break;
                case 13: //cast_total_facebook_likes
                    cout << dato + " :likes totales cast"<< endl;
                    break;
                case 14: //actor_3_name
                    cout << dato + " :nombre actor 3"<< endl;
                    break;
                case 15: //facenumber_in_poster
                    cout << dato + " :numero de caras en poster"<< endl;
                    break;
                case 16: //plot_keywords
                    cout << dato + " :palabras busqueda"<< endl;
                    break;
                case 17: //movie_imdb_link
                    cout << dato + " :link IMDB"<< endl;
                    break;
                case 18: //num_user_for_reviews
                    cout << dato + " :numero de usuarios a revision"<< endl;
                    break;
                case 19: //language
                    cout << dato + " :idioma "<< endl;
                    break;
                case 20: //country
                    cout << dato + " :pais"<< endl;
                    break;
                case 21: //content_rating
                    cout << dato + " :contenido"<< endl;
                    break;
                case 22: //budget
                    cout << dato + " :presupuesto"<< endl;
                    break;
                case 23: //title_year
                    cout << dato + " :año"<< endl;
                    break;
                case 24: //actor_2_facebook_likes
                    cout << dato + " :likes actor 2"<< endl;
                    break;
                case 25: //imdb_score
                    cout << dato + " :score IMDB"<< endl;
                    break;
                case 26: //aspect_ratio
                    cout << dato + " :relación de aspecto"<< endl;
                    break;
                case 27: //movie_facebook_likes
                    cout << dato + " :likes facebook pelicula"<< endl;
                    cout<< "\n" <<endl;
                    break;






            }
        }
            }
    }
}