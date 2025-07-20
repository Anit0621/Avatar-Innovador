#ifndef ITABLERO_H
#define ITABLERO_H

#include <string>
#include "Ficha.h"

class ITablero {
public:
    virtual ~ITablero() = default;

    // Cargar el tablero desde un archivo
    virtual void cargarDesdeArchivo(const std::string& archivo) = 0;

    // Obtener una ficha en una posición específica
    virtual Ficha* getFicha(int fila, int columna) const = 0;
    virtual int getSize() const =0;
     
};

#endif // ITABLERO_H
