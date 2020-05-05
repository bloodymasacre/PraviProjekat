#ifndef AXE_H_INCLUDED
#define AXE_H_INCLUDED
#include "Orudje.hpp"

class Axe{
protected:
    Orudje Oru;
    int damageP;
public:
    Axe():Oru(), damageP(15){};
};

#endif // AXE_H_INCLUDED
