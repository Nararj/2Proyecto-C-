#ifndef JUEGOACCION_H
#define JUEGOACCION_H

#include "Videojuego.h"

// Clase hija que hereda de Videojuego, adquiere el nombre, plataforma y calificacion
class JuegoAccion : public Videojuego {

// Vioencia es un atributo propio y privado de la clase JuegoAccion

private:
    int violencia;

public:

// Antes de llamar al codigo de esta clase, llama al constructor de la clase padre Videojuego para inicializar los atributos heredados
// para que "limpie" el nombre, plataforma y calificacion para despues proseguir con 'violencia'

    // Constructor vacío
    JuegoAccion() : Videojuego() {
        violencia = 0;
    }

// En este caso se reciben 4 parametros (nombre, plataforma, calificacion y violencia) donde los primeros 3 vienen automaticamente de Videojuego
// y el cuarto es guardado de forma local

    // Constructor con parámetros
    JuegoAccion(string nom, string plat,
                 float cal, int viol)
        : Videojuego(nom, plat, cal) {

        violencia = viol;
    }

// Es un metodo override (asegura que un método en una clase derivada reemplace correctamente a un método virtual de la clase base), y se sobreesrcibe 
// el metodo mostrarInfo. 'Videojuego::mostrarInfo();' utiliza un operador de resolucion de ambito :: (Se utiliza para especificar o cambiar el contexto 
// (o ámbito) al que pertenece un identificador, permitiendo acceder a clases, espacios de nombres) (este operador no puede ser sobrecargado) para mandar a llamar la funcion
// de impresion de la clase padre y añade el cout del atributo que añadimos en esta clase, 'violencia'
    // Sobreescritura
    void mostrarInfo() {

        cout << "\nJuego de Accion" << endl;

        Videojuego::mostrarInfo();

        cout << "Violencia: "
             << violencia << endl;
    }
};

#endif