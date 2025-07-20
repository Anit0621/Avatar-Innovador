#include "Ficha.h"

Ficha::Ficha(int fila, int columna, char tipo) : fila(fila), columna(columna), tipo(tipo){}

int Ficha::getFila() const {
    return fila;
}

int Ficha::getColumna() const {
    return columna;
}

char Ficha::getTipo() const {
    return tipo;
}
