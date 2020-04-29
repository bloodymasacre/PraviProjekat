#ifndef POZICIJA_H_INCLUDED
#define POZICIJA_H_INCLUDED

class Pozicija{
private:
    int x;
    int y;
    int z;
public:
    Pozicija(){
        x=0;
        y=0;
        z=0;
    }
    Pozicija(int xx, int yy, int zz){
        x=xx;
        y=yy;
        z=zz;
    }
};

#endif // POZICIJA_H_INCLUDED
