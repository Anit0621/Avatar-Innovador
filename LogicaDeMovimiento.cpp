#include "LogicaDeMovimiento.h"
#include <iostream>

void LogicaDeMovimiento::mover(IPersonaje &personaje, char direccion) {
    int nuevaFila = personaje.getPosicionFila();
    int nuevaColumna = personaje.getPosicionColumna();


    // Ajustar posición según la dirección
    switch (direccion) {
        case 'W': // Mover hacia arriba
        case 'w':
            nuevaFila--;
            break;
        case 'S': // Mover hacia abajo
        case 's':
            nuevaFila++;
            break;
        case 'A': // Mover hacia la izquierda
        case 'a':
            nuevaColumna--;
            break;
        case 'D': // Mover hacia la derecha
        case 'd':
            nuevaColumna++;
            break;
        default:
            // Dirección no válida
            return;
    }
 

    // Establecer la nueva posición del personaje
    personaje.setPosicionFila(nuevaFila);
    personaje.setPosicionColumna(nuevaColumna);
}
