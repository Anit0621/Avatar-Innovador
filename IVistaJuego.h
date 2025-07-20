#ifndef IVISTA_JUEGO_H
#define IVISTA_JUEGO_H

#include <string>

class IVistaJuego {
public:
    virtual ~IVistaJuego() = default;

    // Muestra el estado actual del tablero
    virtual void mostrarTablero() = 0;
     // Muestra el estado actual del tablero y el avatar
    virtual void mostrarJuego() = 0;
    virtual void limpiarPantalla()= 0;

    // Muestra un mensaje al usuario
    virtual void mostrarMensaje(const std::string& mensaje) = 0;

    // Lee una entrada del usuario
    virtual char getEntradaConsola() = 0;
};

#endif // IVISTA_JUEGO_H
