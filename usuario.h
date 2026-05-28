#ifndef USUARIO_H
#define USUARIO_H

#include <vector>

#include "Biblioteca.h"

using namespace std;

// Clase Usuario
class Usuario {

private:

    string nombre;

    vector<string> favoritos;

    Biblioteca biblioteca;

public:

    // Constructor vacío
    Usuario() {
        nombre = "";
    }

    // Constructor con parámetro
    Usuario(string nom) {
        nombre = nom;
    }

    // Agregar favorito
    void agregarFavorito(string juego) {

        favoritos.push_back(juego);
    }

    // Mostrar favoritos
    void mostrarFavoritos() {

        cout << "\nFavoritos:" << endl;

        for (int i = 0;
             i < favoritos.size();
             i++) {

            cout << favoritos[i] << endl;
        }
    }

    // Regresar biblioteca
    Biblioteca& getBiblioteca() {

        return biblioteca;
    }
};

#endif