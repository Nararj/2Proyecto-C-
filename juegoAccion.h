#ifndef JUEGOACCION_H
#define JUEGOACCION_H

#include "Videojuego.h"

// Clase hija
class JuegoAccion : public Videojuego {

private:
    int violencia;

public:

    // Constructor vacío
    JuegoAccion() : Videojuego() {
        violencia = 0;
    }

    // Constructor con parámetros
    JuegoAccion(string nom, string plat,
                 float cal, int viol)
        : Videojuego(nom, plat, cal) {

        violencia = viol;
    }

    // Sobreescritura
    void mostrarInfo() {

        cout << "\nJuego de Accion" << endl;

        Videojuego::mostrarInfo();

        cout << "Violencia: "
             << violencia << endl;
    }
};

#endif