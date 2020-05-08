#ifndef PUSKE_H_INCLUDED
#define PUSKE_H_INCLUDED
#include "Oruzije.hpp"

class Puske:public Oruzije
{
protected:
    bool automatski;
public:
    Puske():Oruzije(), automatski(true) {};
};


#endif // PUSKE_H_INCLUDED
