#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>

#include "Videojuego.h"

using namespace std;

// En esta clase se guardan la coleccion de jeugos del usuario, esta creada para el uso del polimorfismo

// Clase Biblioteca
class Biblioteca {

private:

// Se define un vector de punteros (*) a objetos de tipo Videojuego, esto es para que se puedan guardar objetos 
// de las clases hijas (JuegoAccion, JuegoRPG y JuegoAventuraGrafica), esto se tiene que hacer asi ya que si un 
// vector no peude almacenar clases heredadas de diferentes tamaños asi que al usar punteros a la clase padre este
// vector puede guardar direcciones de memoria en todas las clases

    // Vector de videojuegos
    vector<Videojuego*> juegos;

public:

// Recibe la direccion de memoria de un juego y lo añade al fianl del vector con .push_back, esto para que se 
// puedan guardar juegos de cualquier clase hija, esto sigue siendo polimorfismo en tiempo de ejecucion

    // Agregar juego
    void agregarJuego(Videojuego* juego) {

        juegos.push_back(juego);
    }

// En 'juegos[i]->mostrarInfo()' el ciclo recorre todos los elementos guardados y al acceder a juegos[i], 
// estamos posicionados sobre un puntero a un objeto de tipo Videojuego, al usar '->' accedemos a los metodos
// del objeto apuntado, y al llamar a mostrarInfo() se ejecuta el metodo correspondiente dependiendo del tipo
// de juego que se esta mostrando, esto es poliformismo en tiempo de ejecucion
// Aca gracias a que tenemos un virtual en la clase mostrarInfo de la clase padre cuando el ciclo pasa por un puntero que apunta a un objeto 
// de una clase hija, el compilador llama a la version del metodo mostrarInfo que corresponde a la clase hija y muestra la infroamcion 
// especifica de cada clase, no solo la que se encunetra en la clase padre

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