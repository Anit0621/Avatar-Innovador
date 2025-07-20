#ifndef IJUEGOLOGICA_H
#define IJUEGOLOGICA_H

class IJuegoLogica {
public:
    virtual ~IJuegoLogica() = default;
    virtual void moverAvatar(char direccion) = 0;
    virtual void iniciar() = 0;
    virtual void puntuar()=0;
    virtual int getPuntaje()=0;
    virtual void play(char movimiento) =0;
};

#endif // IJUEGOLOGICA_H
