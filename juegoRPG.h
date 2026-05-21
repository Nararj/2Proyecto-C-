#ifndef JUEGORPG_H
#define JUEGORPG_H

#include "Videojuego.h"

// Clase hija
class JuegoRPG : public Videojuego {

private:
    int horasHistoria;

public:

    JuegoRPG() : Videojuego() {
        horasHistoria = 0;
    }

    JuegoRPG(string nom, string plat,
              float cal, int horas)
        : Videojuego(nom, plat, cal) {

        horasHistoria = horas;
    }

    void mostrarInfo() {

        cout << "\nJuego RPG" << endl;

        Videojuego::mostrarInfo();

        cout << "Horas de historia: "
             << horasHistoria << endl;
    }
};

#endif