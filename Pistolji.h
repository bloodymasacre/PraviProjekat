#ifndef PISTOLJI_H_INCLUDED
#define PISTOLJI_H_INCLUDED
#include "Oruzije.hpp"

class Pistolji{
private:
    bool automatski;
public:
    Pistolji():Oruzije("metal, drvo, rifle body", 250, false, true, 20, 30, 5), automatski(true);

};

#endif // PISTOLJI_H_INCLUDED
