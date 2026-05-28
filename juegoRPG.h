#ifndef JUEGORPG_H
#define JUEGORPG_H

#include "Videojuego.h"

// Clase hija que hereda de Videojuego, adquiere el nombre, plataforma y calificacion
class JuegoRPG : public Videojuego {

private:
    int horasHistoria;

public:

    JuegoRPG() : Videojuego() {
        horasHistoria = 0;
    }

// En este caso se reciben 4 parametros (nombre, plataforma, calificacion y violencia) donde los primeros 3 vienen automaticamente de Videojuego
// y el cuarto es guardado de forma local, en este caso son las horas que tardo en completar la historia


    JuegoRPG(string nom, string plat,
              float cal, int horas)
        : Videojuego(nom, plat, cal) {

        horasHistoria = horas;
    }

// Al igual que en JuegoAccion se utiliza un metodo override para sobreescribir el metodo mostrarInfo,
// se manda a llamar al metodo de la clase padre y en este caso se añade el cout del nuevo atributo 'horasHistoria'

    void mostrarInfo() {

        cout << "\nJuego RPG" << endl;

        Videojuego::mostrarInfo();

        cout << "Horas de historia: "
             << horasHistoria << endl;
    }
};

#endif