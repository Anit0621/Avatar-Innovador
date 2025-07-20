#include <iostream>
#include "Tablero.h"
#include "Juego.h"
#include "LogicaDeMovimiento.h"
#include "VistaConsola.h"
#include "Avatar.h"
#include "AvatarCPU.h"
#include <vector>

int main() {
    // Configuración inicial
    Tablero tablero;
    tablero.cargarDesdeArchivo("dataTablero.txt");
    
    // Creación de personajes
    Avatar* jugador = new Avatar();
    AvatarCPU* cpu = new AvatarCPU();
    
    // Posiciones iniciales
    jugador->setPosicionFila(2);
    jugador->setPosicionColumna(2);
    cpu->setPosicionFila(10);
    cpu->setPosicionColumna(5);
    
    // Vector para la vista
    std::vector<IPersonaje*> personajes = {jugador, cpu};
    
    // Sistema del juego
    LogicaDeMovimiento logica;
    Juego juego(&tablero, jugador, &logica, true);
    VistaConsola vista(&tablero, personajes); // Ahora con 2 parámetros correctos
    
    // Bucle principal
    while(juego.getEstado()) {
        vista.mostrarJuego();
        vista.mostrarMensaje("Digite su movimiento (WASD):");
        
        char input = vista.getEntradaConsola();
        
        // Mover personajes
        jugador->mover(input);
        cpu->mover(input);
        
        juego.play(input);
    }

    // Resultado final
    if(juego.getWin()) {
        vista.mostrarMensaje("¡Ganaste! Puntos: " + std::to_string(juego.getPuntaje()));
    } else {
        vista.mostrarMensaje("¡Perdiste! Caíste en un abismo");
    }
    
    delete jugador;
    delete cpu;
    return 0;
}