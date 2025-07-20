/*
CASO DE ESTUDIO - AVATAR INNOVADOR
Profesor: Victor Bucheli
Estudiante: Valentina Montezuma Gonzalez
Codigo: 202242058
Correo: valentina.montezuma@correounivalle.edu.co

DESCRIPCION:
Se trabajo sobre el punto anterior pero eliminando avatarCPU y en lugar de ello trabajando con un nuevo avatar, AvatarInnovador
el cual se planeo su movimiento mediante delay. Es decir, se mueve igual a avatar (que movemos con las teclas ASDW) pero con dos
movimientos de retraSso. Igual que antes podemos ver ambos personajes en el tablero, sin embargo el jeugo terminar cuando el
jugador de avatar (que manejamos) caiga en un abismo.

*/

#include <iostream>
#include "Tablero.h"
#include "Camino.h"
#include "Abismo.h"
#include "Salida.h"
#include "Juego.h"
#include "LogicaDeMovimiento.h"
#include "VistaConsola.h"
#include "Avatar.h"
#include "AvatarInnovador.h"  // Nuevo include para el AvatarInnovador
#include <vector>

/*
Funcion principal del juego.
Maneja la lógica principal, la interacción con el jugador y la visualizacion.
Ahora incluye tanto el Avatar principal (controlado pr el jugador) como el AvatarInnovador (con movimiento retardado).
*/
int main() {
    //1. Configuracon inicial del tablero
    Tablero tablero;
    tablero.cargarDesdeArchivo("dataTablero.txt");  // Carga el tablero desde archivo

    //2. Creacion de los personajes 
    std::vector<IPersonaje*> personajes;  // Vector para almacenar todos los personajes

    //2.1. Avatar del jugador (controlado por WASD)
    personajes.push_back(new Avatar());  // Crea el avatar principal
    personajes[0]->setPosicionFila(2);   // Posicion inicial (fila)
    personajes[0]->setPosicionColumna(2); // Posicion inicial (columna)

    //2.2. AvatarInnovador (movimiento retardado)
    personajes.push_back(new AvatarInnovador());  // Crea el avatar innovador
    personajes[1]->setPosicionFila(10);  // Posicion inicial (fila)
    personajes[1]->setPosicionColumna(5); // Posicion inicial (columna)

    //3. Configuración del juego y la vista
    LogicaDeMovimiento logica;  // Logica de movimiento (solo afecta al jugador)
    Juego juego(&tablero, dynamic_cast<Avatar*>(personajes[0]), &logica, true);  // Solo el jugador afecta el estado del juego
    VistaConsola vista(&tablero, personajes);  // La vista ahora recibe ambos avatares

    // 4. Bucle principal del juego
    while (juego.getEstado()) {  // Mientras el juego esté activo
        //4.1. Mostrar el estado actual del juego
        vista.mostrarJuego();
        vista.mostrarMensaje("Digite su movimiento (WASD):");

        char input = vista.getEntradaConsola();

        for (auto p : personajes) {
            p->mover(input);  // Llama a mover() segun el tipo de avatar (normal o innovador)
        }

        //4.4. Actualizar estado del juego (solo afecta al jugador principal)
        juego.play(input);
    }

    if (juego.getWin()) {
        vista.mostrarMensaje("¡Ganaste! Puntos: " + std::to_string(juego.getPuntaje()));
    } else {
        vista.mostrarMensaje("¡Perdiste! Caíste en un abismo");
    }


    for (auto p : personajes) {
        delete p;  
    }

    return 0;
}