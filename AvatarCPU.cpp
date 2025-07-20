#include "AvatarCPU.h"

AvatarCPU::AvatarCPU() : Avatar() {
    std::srand(std::time(0));
}

void AvatarCPU::mover(char direction) {
    int dir = std::rand() % 4;
    int nuevaFila = getPosicionFila();
    int nuevaColumna = getPosicionColumna();

    switch(dir) {
        case 0: nuevaFila--; break;    // Arriba
        case 1: nuevaFila++; break;    // Abajo
        case 2: nuevaColumna--; break; // Izquierda
        case 3: nuevaColumna++; break; // Derecha
    }
    
    setPosicionFila(nuevaFila);
    setPosicionColumna(nuevaColumna);
}