#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>

#include "Videojuego.h"

using namespace std;

// Clase Biblioteca
class Biblioteca {

private:

    // Vector de videojuegos
    vector<Videojuego*> juegos;

public:

    // Agregar juego
    void agregarJuego(Videojuego* juego) {

        juegos.push_back(juego);
    }

    // Mostrar juegos
    void mostrarJuegos() {

        for (int i = 0;
             i < juegos.size();
             i++) {

            juegos[i]->mostrarInfo();
        }
    }
};

#endif