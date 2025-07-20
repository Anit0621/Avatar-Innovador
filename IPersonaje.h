// IPersonaje.h
#ifndef IPERSONAJE_H
#define IPERSONAJE_H

class IPersonaje {
public:
    virtual int getPosicionFila() const = 0;
    virtual int getPosicionColumna() const = 0;
    virtual void mover(char direccion) = 0;

    // Cambiar retorno de void a int para setPosicionFila y setPosicionColumna
    virtual void setPosicionFila(int fila) = 0;
    virtual void setPosicionColumna(int columna) = 0;

    virtual ~IPersonaje() = default;
};

#endif // IPERSONAJE_H
