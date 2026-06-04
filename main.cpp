// Narayana Rajaram Lopez | A01714315

// Se incluyen los archivos .h
#include "JuegoAccion.h"
#include "JuegoRPG.h"
#include "JuegoAventuraGrafica.h"
#include "Usuario.h"

int main() {

// Crear un objeto de la clase Usuario en memoria stack, donde el obejto se llama usuario y se le pasa la cadena de un nombre random

    // Crear usuario
    Usuario usuario("Carlos");

// Se utiliza punteros "*"" para crear obejtos que se guarden en la memoria heap

    // Variable llamada Juego1 con un puntero a un objeto de tipo JuegoAccion, este llama a su constructor y le pasa los 4 paramtros, nombre, plataforma, calificacion y violencia

    // Crear videojuegos
    JuegoAccion* juego1 =
        new JuegoAccion(
            "Halo",
            "Xbox",
            9.5,
            8
        );


    //Variable llamada Juego2 con un puntero a un objeto de tipo JuegoRPG, este llama a su constructor y le pasa los 4 paramtros, nombre, plataforma, calificacion y horas

    JuegoRPG* juego2 =
        new JuegoRPG(
            "Pokemon",
            "Nintendo",
            9.0,
            40
        );

    //Variable llamada Juego3 con un puntero a un objeto de tipo JuegoAventuraGrafica, este llama a su constructor y le pasa los 4 paramtros, nombre, plataforma, calificacion y decisiones

    JuegoAventuraGrafica* juego3 =
        new JuegoAventuraGrafica(
            "Life is Strange",
            "PC",
            10,
            15
        );

// usuario.getBiblioteca() llama a un metodo getter del obejto usuario que devuelve una referencia al obejto interno que maneja la coleccion 
// de juegos llamada Biblioteca, despues de obtener una biblioteca se manda a llamar al metodo agregarjuego y pasamos el puntero correspondiente
// que los añade a la lista
// Devuelve una refrencia (&)

    // Agregar juegos
    usuario.getBiblioteca()
           .agregarJuego(juego1);

    usuario.getBiblioteca()
           .agregarJuego(juego2);

    usuario.getBiblioteca()
           .agregarJuego(juego3);

// Accedemos a la bilioteca del usuario y ejecutamos el metodo mostrarJuegos e imprime en pantalla la informacion de cada juego utilizando el metodo 
// mostrarInfo() que es virtual y se sobreescribe en cada clase hija para mostrar la informacion especifica de cada tipo de juego, aca se usa
// el poliformismo para llamar al metodo correcto dependiendo del tipo de juego que se esta mostrando
    
    // Mostrar juegos
    usuario.getBiblioteca()
           .mostrarJuegos();

// El obejto usuario maneja los favoritos, se llama al metodo agregarFavorito y se le pasa el nombre de un juego para añadirlo a la lista de favoritos, 
// despues se llama al metodo mostrarFavoritos para imprimir en pantalla la lista de juegos favoritos del usuario

    // Agregar favoritos
    usuario.agregarFavorito("Life Is Strange");

    usuario.agregarFavorito("Stardew Valley");

// Se llama al metodo para imprimir la lista de juegos que se agregaron en favoritos 

    // Mostrar favoritos
    usuario.mostrarFavoritos();

    return 0;
}