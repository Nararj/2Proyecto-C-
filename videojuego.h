#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
using namespace std;

// Clase padre
class Videojuego {

protected:
    // Atributos protegidos
    string nombre;
    string plataforma;
    float calificacion;

public:

    // Constructor vacío
    Videojuego() {
        nombre = "";
        plataforma = "";
        calificacion = 0;
    }

    // Constructor con parámetros
    Videojuego(string nom, string plat, float cal) {
        nombre = nom;
        plataforma = plat;
        calificacion = cal;
    }

    // Método virtual
    virtual void mostrarInfo() {

        cout << "Nombre: " << nombre << endl;
        cout << "Plataforma: " << plataforma << endl;
        cout << "Calificacion: " << calificacion << endl;
    }
};

#endif