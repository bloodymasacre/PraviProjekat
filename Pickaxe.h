#ifndef PICKAXE_H_INCLUDED
#define PICKAXE_H_INCLUDED
#include "Orudje.hpp"

class Pickaxe{
protected:
    int damageP;
public:
    Pickaxe():Orudje("metal, drvo, kanap", 150, 40), damageP(15);

};

#endif // PICKAXE_H_INCLUDED
