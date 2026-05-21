// Narayana Rajaram Lopez | A01714315

#include "JuegoAccion.h"
#include "JuegoRPG.h"
#include "JuegoAventuraGrafica.h"
#include "Usuario.h"

int main() {

    // Crear usuario
    Usuario usuario("Carlos");

    // Crear videojuegos
    JuegoAccion* juego1 =
        new JuegoAccion(
            "Halo",
            "Xbox",
            9.5,
            8
        );

    JuegoRPG* juego2 =
        new JuegoRPG(
            "Pokemon",
            "Nintendo",
            9.0,
            40
        );

    JuegoAventuraGrafica* juego3 =
        new JuegoAventuraGrafica(
            "Life is Strange",
            "PC",
            8.5,
            15
        );

    // Agregar juegos
    usuario.getBiblioteca()
           .agregarJuego(juego1);

    usuario.getBiblioteca()
           .agregarJuego(juego2);

    usuario.getBiblioteca()
           .agregarJuego(juego3);

    // Mostrar juegos
    usuario.getBiblioteca()
           .mostrarJuegos();

    // Agregar favoritos
    usuario.agregarFavorito("Life Is Strange");

    usuario.agregarFavorito("Stardew Valley");

    // Mostrar favoritos
    usuario.mostrarFavoritos();

    return 0;
}