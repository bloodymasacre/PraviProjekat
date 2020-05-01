#ifndef PUSKE_H_INCLUDED
#define PUSKE_H_INCLUDED
#include "Oruzije.hpp"

class Puske{
protected:
    bool automatski;
public:
    Puske():Oruzije("metal, drvo, rifle body", 250, false, true, 20, 30, 5), automatski(true);


};


#endif // PUSKE_H_INCLUDED
