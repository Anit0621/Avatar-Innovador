#ifndef VISTA_CONSOLA_H
#define VISTA_CONSOLA_H

#include "IVistaJuego.h"
#include "Tablero.h" 
#include "IPersonaje.h"
#include <vector>
#include <string>

class VistaConsola : public IVistaJuego {
private:
    Tablero* tablero; 
    std::vector<IPersonaje*> personajes;  // Vector para todos los personajes
public:
    /*
    Constructor modificado para recibir múltiples personajes
    untero al tablero de juego
    Vector con todos los personajes a mostrar
     */
    VistaConsola(Tablero* tablero, const std::vector<IPersonaje*>& personajes);
    ~VistaConsola() override = default; // Polimorfismo por sobreescritura al destructor

    void mostrarTablero() override;
    void mostrarJuego() override;
    void limpiarPantalla() override;
    void mostrarMensaje(const std::string& mensaje) override;
    char getEntradaConsola() override;
};
#endif