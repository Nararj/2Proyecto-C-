#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
using namespace std;

// Define la clase padre llamada videojuego
class Videojuego {

// Atributos protegidos para que las clases hijas puedan acceder a ellos

protected:
    // Atributos protegidos
    string nombre;
    string plataforma;
    float calificacion;

// Constructores y métodos públicos

public:

// Todo inicia sin parametros y la calificacion se inicializa en 0, el nombre y la plataforma se inicializan como cadenas vacias

    // Constructor vacío
    Videojuego() {
        nombre = "";
        plataforma = "";
        calificacion = 0;
    }

// Recibe el nombre, la plataforma y la calificacion del juego y los asigna a los atributos correspondientes

    // Constructor con parámetros
    Videojuego(string nom, string plat, float cal) {
        nombre = nom;
        plataforma = plat;
        calificacion = cal;
    }

// Es una clase con poliformismo, este metodo puede ser modificado y sobreescrito por las clases hijas ya que gracias a que tenemos un virtual 
// (una clase base, donde se le indica al compilador que la versión del método a ejecutar debe determinarse según el tipo de objeto real en el momento de ejecutarse)
// y cuando usemos punteros en biblioteca, el compilador sabra llamar al metodo correcto dependiendo del tipo de juego que se esta mostrando, 
// esto es poliformismo en tiempo de ejecucion

    // Método virtual
    virtual void mostrarInfo() {

        cout << "Nombre: " << nombre << endl;
        cout << "Plataforma: " << plataforma << endl;
        cout << "Calificacion: " << calificacion << endl;
    }
};

#endif