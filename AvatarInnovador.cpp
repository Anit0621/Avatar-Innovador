#include "AvatarInnovador.h"

/**
 * Constructor - Inicializa la cola con 2 movimientos neutros
 * para crear el efecto de delay inicial
 */
AvatarInnovador::AvatarInnovador() : Avatar() {
    movimientosPasados.push(' '); // Movimiento neutro 1
    movimientosPasados.push(' '); // Movimiento neutro 2
}

/*
Implementacion del movimiento con delay de 2 turnos
*/
void AvatarInnovador::mover(char direction) {
    // 1. Registrar el nuevo movimiento del jugador
    movimientosPasados.push(direction);
    
    // 2. Obtener el movimiento mas antiguo (con delay de 2 turnos)
    char movimientoRetardado = movimientosPasados.front();
    movimientosPasados.pop();
    
    // 3. Ejecutar el movimiento solo si no es neutro
    if(movimientoRetardado != ' ') {
        // Usa el metodo mover() de la clase base Avatar
        Avatar::mover(movimientoRetardado);
    }
}
