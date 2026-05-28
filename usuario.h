#ifndef USUARIO_H
#define USUARIO_H

#include <vector>

#include "Biblioteca.h"

using namespace std;

// Es la composicion del proyecto

// Clase Usuario
class Usuario {

// El usuario tiene una biblioteca como atributo interno y su vida esta liagada al del usuario, si el usuario deja de existir, 
// su biblioteca tambien, por eso es una composicion
// Se crea un vector tipo string que almacena los juegos favoritos del usuario, y un string para el nombre del usuario

private:

    string nombre;

    vector<string> favoritos;

    Biblioteca biblioteca;

public:

// Constructor vacio y con parametro para inicializar el  nombre del usuario

    // Constructor vacío
    Usuario() {
        nombre = "";
    }

    // Constructor con parámetro
    Usuario(string nom) {
        nombre = nom;
    }

// Inserta el nombre de un juego de forma directa al vector de string de favoritos


    // Agregar favorito
    void agregarFavorito(string juego) {

        favoritos.push_back(juego);
    }

// Recorre el vector de cadenas imprimiendo uno a uno los titulos que fueron añadidos por el usuario
    // Mostrar favoritos
    void mostrarFavoritos() {

        cout << "\nFavoritos:" << endl;

        for (int i = 0;
             i < favoritos.size();
             i++) {

            cout << favoritos[i] << endl;
        }
    }

// Retorna la referencia (&) al obejto interno de biblioteca, en este caso si no tuviera & se crearia una copia temporal de la bilioteca
// cada vez que se llama al metodo asi que al regresar como un referencia se esta otorgando acceso directo a la bilbioteca origianl del usuario,
// por esta razon en el main se puede acceder a los metodos de biblioteca para agregar juegos y mostrar juegos
    // Regresar biblioteca
    Biblioteca& getBiblioteca() {

        return biblioteca;
    }
};

#endif