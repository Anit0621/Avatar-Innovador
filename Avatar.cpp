#include "Avatar.h"

Avatar::Avatar() : Personaje() {}

void Avatar::mover(char direction) {
    int nuevaFila = getPosicionFila();
    int nuevaColumna = getPosicionColumna();

    switch (direction) {
        case 'W': case 'w': nuevaFila--; break;
        case 'S': case 's': nuevaFila++; break;
        case 'A': case 'a': nuevaColumna--; break;
        case 'D': case 'd': nuevaColumna++; break;
        default: return;
    }
    
    setPosicionFila(nuevaFila);
    setPosicionColumna(nuevaColumna);
}