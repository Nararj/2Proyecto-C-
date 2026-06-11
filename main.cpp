/*
 *
 * Proyecto guardar videojuegos
 * Narayana Rajaram López
 * A01714315
 * 04/06/2026
 * Version : 3
 * Proyecto para la clase Programación Orientado a Objetos. Es un programa 
 * que captura diferentes tipos de juegos con sus propios atributos y los
 * almacena en una biblioteca para poder ver su calificación, plataforma y
 * otros datos, permitiendo también agregar juegos a favoritos. 
 */

#include <iostream>
#include <string>

#include "JuegoAccion.h"
#include "JuegoRPG.h"
#include "JuegoAventuraGrafica.h"
#include "Usuario.h"


/**
 * Lee un entero positivo o cero y maneja errores de entrada.
 * No acepta letras ni valores negativos.
 *
 * @return entero válido
 */
int leerEntero() {

    int valor;

    while (true) {

        if (!(cin >> valor)) {

            cout << "Error. Ingresa un numero: ";

            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (valor < 0) {

            cout << "Error. Ingresa un numero mayor o igual a 0: ";
        }
        else {

            return valor;
        }
    }
}

/**
 * Lee una calificacion entre 0 y 10 y maneja errores de entrada.
 * No permite valores negativos ni mayores a 10
 *
 * @return calificacion válida
 */
float leerCalificacion() {

    float valor;

    while (true) {

        if (!(cin >> valor)) {

            cout << "Error. Ingresa un numero: ";

            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (valor < 0 || valor > 10) {

            cout << "Error. La calificacion debe estar entre 0 y 10: ";
        }
        else {

            return valor;
        }
    }
}

/**
 * pedirDatosBasicos solicita los datos
 * comunes a todos los videojuegos.
 *
 * @param nombre nombre del videojuego
 * @param plataforma plataforma del videojuego
 * @param calificacion calificacion del videojuego
 */
void pedirDatosBasicos(
    string &nombre,
    string &plataforma,
    float &calificacion) {

    cin.ignore();

    cout << "\nNombre: ";
    getline(cin, nombre);

    cout << "Plataforma: ";
    getline(cin, plataforma);

    cout << "Calificacion: ";

    calificacion = leerCalificacion();
}

int main() {

    Usuario usuario("Carlos");

    int opcion;

    do {

        cout << "\nBIBLIOTECA DE VIDEOJUEGOS "
             << endl;

        cout << "1. Agregar Juego RPG"
             << endl;

        cout << "2. Agregar Juego de Accion"
             << endl;

        cout << "3. Agregar Juego de Aventura Grafica"
             << endl;

        cout << "4. Mostrar Juegos"
             << endl;

        cout << "5. Buscar Juego"
             << endl;

        cout << "6. Agregar Favorito"
             << endl;

        cout << "7. Mostrar Favoritos"
             << endl;

        cout << "8. Salir"
             << endl;

        cout << "\nOpcion: ";

        opcion = leerEntero();

        switch(opcion) {

        case 1: {

            string nombre;
            string plataforma;
            float calificacion;
            int horasHistoria;

            pedirDatosBasicos(
                nombre,
                plataforma,
                calificacion
            );

            cout << "Horas de historia: ";

                horasHistoria = leerEntero();

                Videojuego* juego =
                    new JuegoRPG(
                        nombre,
                        plataforma,
                        calificacion,
                        horasHistoria
                    );

                usuario.getBiblioteca()
                    .agregarJuego(juego);

                cout << "\nJuego agregado."
                    << endl;

                break;
            }

        case 2: {

            string nombre;
            string plataforma;
            float calificacion;
            int violencia;

            pedirDatosBasicos(
                nombre,
                plataforma,
                calificacion
            );

            cout << "Nivel de violencia: ";

            violencia = leerEntero();

            Videojuego* juego =
                new JuegoAccion(
                    nombre,
                    plataforma,
                    calificacion,
                    violencia
                );

            usuario.getBiblioteca()
                .agregarJuego(juego);

            cout << "\nJuego agregado."
                << endl;

            break;
        }

        case 3: {

            string nombre;
            string plataforma;
            float calificacion;
            int decisiones;

            pedirDatosBasicos(
                nombre,
                plataforma,
                calificacion
            );

            cout << "Cantidad de decisiones: ";

            decisiones = leerEntero();

            Videojuego* juego =
                new JuegoAventuraGrafica(
                    nombre,
                    plataforma,
                    calificacion,
                    decisiones
                );

            usuario.getBiblioteca()
                .agregarJuego(juego);

            cout << "\nJuego agregado."
                << endl;

            break;
        }

        case 4: {

            usuario.getBiblioteca()
                   .mostrarJuegos();

            break;
        }

        case 5: {

            string nombreBuscado;

            cin.ignore();

            cout << "\nNombre del juego: ";

            getline(cin, nombreBuscado);

            usuario.getBiblioteca()
                   .buscarJuego(
                       nombreBuscado
                   );

            break;
        }

        case 6: {

            string favorito;

            cin.ignore();

            cout << "\nNombre del favorito: ";

            getline(cin, favorito);

            usuario.agregarFavorito(
                favorito
            );

            cout << "\nFavorito agregado."
                 << endl;

            break;
        }

        case 7: {

            usuario.mostrarFavoritos();

            break;
        }

        case 8: {

            cout << "\nGracias :D"
                 << endl;

            break;
        }

        default: {

            cout << "\nOpcion invalida."
                 << endl;
        }
        }

    } while(opcion != 8);

    return 0;
}