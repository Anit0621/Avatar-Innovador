// Personaje.h
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "IPersonaje.h"

class Personaje : public IPersonaje {
protected:
    int posicionFila;
    int posicionColumna;

public:
    Personaje();
    virtual ~Personaje() = default;

    // Métodos de la interfaz IPersonaje
    virtual int getPosicionFila() const override;
    virtual int getPosicionColumna() const override;
    virtual void mover(char direccion) override;

    // Implementación de los métodos setPosicionFila y setPosicionColumna
    virtual void setPosicionFila(int fila) override;
    virtual void setPosicionColumna(int columna) override;
};

#endif // PERSONAJE_H
