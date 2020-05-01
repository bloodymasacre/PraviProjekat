#ifndef AXE_H_INCLUDED
#define AXE_H_INCLUDED
#include "Orudje.hpp"

class Axe{
protected:
    int damageP;
public:
    Axe():Orudje("metal, drvo, kanap", 150, 40), damageP(15);

};

#endif // AXE_H_INCLUDED
