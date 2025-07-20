#ifndef VISTA_CONSOLA_H
#define VISTA_CONSOLA_H

#include "IVistaJuego.h"
#include "Tablero.h" 
#include "IPersonaje.h"
#include <vector>
#include <string>

class VistaConsola : public IVistaJuego {
private:
    Tablero* tablero;  // Cambiado de ITablero* a Tablero*
    std::vector<IPersonaje*> personajes;  // Vector para todos los personajes
public:
    VistaConsola(Tablero* tablero, const std::vector<IPersonaje*>& personajes);  // Constructor modificado
    ~VistaConsola() override = default;

    void mostrarTablero() override;
    void mostrarJuego() override;
    void limpiarPantalla() override;
    void mostrarMensaje(const std::string& mensaje) override;
    char getEntradaConsola() override;
};
#endif