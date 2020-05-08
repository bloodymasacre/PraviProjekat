#ifndef AXE_H_INCLUDED
#define AXE_H_INCLUDED
#include "Orudje.hpp"

class Axe:public Orudje
{
protected:
    int damageP;
public:
    Axe():Orudje(), damageP(15) {};
};

#endif // AXE_H_INCLUDED
