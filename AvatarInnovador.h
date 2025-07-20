#ifndef AVATARINNOVADOR_H
#define AVATARINNOVADOR_H

#include "Avatar.h"
#include <queue> 

/*
Implementacion de avatar con movimiento retardado (2 turnos de delay)
Hereda de Avatar y usa polimorfismo para modificar el comportamiento de mover() respetando indicaciones de la guia
 */

class AvatarInnovador : public Avatar {
private:
    std::queue<char> movimientosPasados; // Almacena historico de movimientos para el delay
    
public:
    /*
    Constructor que inicializa con 2 movimientos neutros para el delay incial
    */
    AvatarInnovador();
    
    /*
    Destructor virtual para garantizar limpieza correcta con polimorfismo
    */
    virtual ~AvatarInnovador() override = default;
    
    /**
    Implementa movimieto con delay de 2 turnos
    
    */
    virtual void mover(char direction) override;
};

#endif // AVATARINNOVADOR_H