#ifndef JUEGO_H
#define JUEGO_H

#include "IJuegoLogica.h"
#include "ITablero.h"
#include "IPersonaje.h"
#include "LogicaDeMovimiento.h"

class Juego : public IJuegoLogica {
protected:
    ITablero* tablero;          // Puntero al tablero
    IPersonaje* avatar;         // Puntero al personaje
    LogicaDeMovimiento* logicaDeMovimiento; // Conocimiento de la lógica de movimiento
    bool estado;
    int puntaje;

public:
    Juego(ITablero* tablero, IPersonaje* avatar, LogicaDeMovimiento* logicaDeMovimiento, bool estado);
    ~Juego();

    void moverAvatar(char direccion) override;
    void iniciar() override;
    bool getEstado();
    bool getWin();
    void puntuar() override;
    int getPuntaje() override;
    void play(char moviemiento) override;
};

#endif // JUEGO_H
