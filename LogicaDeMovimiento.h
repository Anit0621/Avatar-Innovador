#ifndef LOGICA_DE_MOVIMIENTO_H
#define LOGICA_DE_MOVIMIENTO_H

#include "IPersonaje.h"

class LogicaDeMovimiento {
public:
    // Método que mueve al personaje basado en la dirección dada
    void mover(IPersonaje &personaje, char direccion);
};

#endif // LOGICA_DE_MOVIMIENTO_H
