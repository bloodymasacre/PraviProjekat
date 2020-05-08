#ifndef PICKAXE_H_INCLUDED
#define PICKAXE_H_INCLUDED
#include "Orudje.hpp"

class Pickaxe:public Orudje
{
protected:
    int damageP;
public:
    Pickaxe():Orudje(), damageP(15) {};
};

#endif // PICKAXE_H_INCLUDED
