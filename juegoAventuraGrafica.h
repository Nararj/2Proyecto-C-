#ifndef JUEGOAVENTURAGRAFICA_H
#define JUEGOAVENTURAGRAFICA_H

#include "Videojuego.h"

// Clase hija que hereda de Videojuego, adquiere el nombre, plataforma y calificacion
class JuegoAventuraGrafica : public Videojuego {

private:
    int decisiones;

public:

    JuegoAventuraGrafica() : Videojuego() {
        decisiones = 0;
    }

// En este caso se reciben 4 parametros (nombre, plataforma, calificacion y violencia) donde los primeros 3 vienen automaticamente de Videojuego
// y el cuarto es guardado de forma local, en este caso son las decisiones que se tomaron

    JuegoAventuraGrafica(string nom,
                         string plat,
                         float cal,
                         int decis)
        : Videojuego(nom, plat, cal) {

        decisiones = decis;
    }

// Al igual que en JuegoAccion se utiliza un metodo override para sobreescribir el metodo mostrarInfo,
// se manda a llamar al metodo de la clase padre y en este caso se añade el cout del nuevo atributo 'decisiones'

    void mostrarInfo() {

        cout << "\nJuego de Aventura Grafica"
             << endl;

        Videojuego::mostrarInfo();

        cout << "Decisiones importantes: "
             << decisiones << endl;
    }
};

#endif