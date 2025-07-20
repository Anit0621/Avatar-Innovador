#ifndef AVATAR_H
#define AVATAR_H

#include "Personaje.h"

class Avatar : public Personaje {
public:
    Avatar();
    virtual ~Avatar() override = default; // Destructor virtual
    void mover(char direction) override;
};

#endif // AVATAR_H