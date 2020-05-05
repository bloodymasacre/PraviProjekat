#ifndef PICKAXE_H_INCLUDED
#define PICKAXE_H_INCLUDED
#include "Orudje.hpp"

class Pickaxe{
protected:
    Orudje Oru;
    int damageP;
public:
    Pickaxe():Oru(), damageP(15){};

};

#endif // PICKAXE_H_INCLUDED
