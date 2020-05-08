#ifndef PISTOLJI_H_INCLUDED
#define PISTOLJI_H_INCLUDED
#include "Oruzije.hpp"

class Pistolji: public Oruzije
{
private:
    bool automatski;
public:
    Pistolji():Oruzije(), automatski(true) {};
};

#endif // PISTOLJI_H_INCLUDED
