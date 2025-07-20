// Personaje.cpp
#include "Personaje.h"

Personaje::Personaje() : posicionFila(0), posicionColumna(0) {}

int Personaje::getPosicionFila() const {
    return posicionFila;
}

int Personaje::getPosicionColumna() const {
    return posicionColumna;
}

void Personaje::mover(char direccion) {
    // Implementación del movimiento (puedes agregar lógica)
}

void Personaje::setPosicionFila(int fila) {
    posicionFila = fila;
    
}

void Personaje::setPosicionColumna(int columna) {
    posicionColumna = columna;
    
}
