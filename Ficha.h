
#ifndef FICHA_H
#define FICHA_H

class Ficha {
protected:
    int fila;
    int columna;
    char tipo;

public:
    Ficha(int fila, int columna, char tipo);
    virtual ~Ficha() = default;

    // Getters
    int getFila() const;
    int getColumna() const;
    char getTipo() const;
};

#endif // FICHA_H
