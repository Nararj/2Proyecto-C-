#ifndef JUEGOAVENTURAGRAFICA_H
#define JUEGOAVENTURAGRAFICA_H

#include "Videojuego.h"

// Clase hija
class JuegoAventuraGrafica : public Videojuego {

private:
    int decisiones;

public:

    JuegoAventuraGrafica() : Videojuego() {
        decisiones = 0;
    }

    JuegoAventuraGrafica(string nom,
                         string plat,
                         float cal,
                         int decis)
        : Videojuego(nom, plat, cal) {

        decisiones = decis;
    }

    void mostrarInfo() {

        cout << "\nJuego de Aventura Grafica"
             << endl;

        Videojuego::mostrarInfo();

        cout << "Decisiones importantes: "
             << decisiones << endl;
    }
};

#endif