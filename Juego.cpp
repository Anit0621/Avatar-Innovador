#include "Juego.h"
#include <iostream>

Juego::Juego(ITablero* tablero, IPersonaje* avatar, LogicaDeMovimiento* logicaDeMovimiento, bool estado=true)
    : tablero(tablero), avatar(avatar), logicaDeMovimiento(logicaDeMovimiento), estado(estado) {}

Juego::~Juego() {
}

void Juego::moverAvatar(char direccion) {
    logicaDeMovimiento->mover(*avatar, direccion);
    Ficha* ficha = tablero->getFicha(avatar->getPosicionFila(),avatar->getPosicionColumna());
    if(ficha->getTipo()=='1') estado=true;
    else if (ficha->getTipo()=='0') estado=false;
    else std::cout<<"win"<<std::endl;

}

void Juego::iniciar() {
    std::cout << "El juego ha comenzado." << std::endl;
    puntaje=100;
}

bool Juego::getEstado(){
    return estado;
}
bool Juego::getWin(){
     Ficha* ficha = tablero->getFicha(avatar->getPosicionFila(),avatar->getPosicionColumna());
       if(ficha->getTipo()=='S') return true;
       else return false;
}
void Juego::puntuar(){
     puntaje=puntaje-2;
}
int Juego::getPuntaje(){
    return puntaje;
}
void Juego::play(char movimiento){
    

            this->moverAvatar(movimiento);
            puntuar();

}