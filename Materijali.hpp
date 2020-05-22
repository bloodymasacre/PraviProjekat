#ifndef MATERIJALI_HPP_INCLUDED
#define MATERIJALI_HPP_INCLUDED

class Materijal
{
private:
    string vrstaMa;
    int kolicina;
    int X2;
    int Y2;
public:
    Materijal()
    {
        vrstaMa="Metal";
        kolicina=10;
    }
    Materijal(string vm, int re)
    {
        vm=vrstaMa;
        re=kolicina;
    }
    Materijal(const Materijal& m)
    {
        vrstaMa=m.vrstaMa;
        kolicina=m.kolicina;
    }
    int getX2()
    {
        return X2;
    }
    int getY2()
    {
        return Y2;
    }
    void setX2(int xx2)
    {
        X2=xx2;
    }
    void setY2(int yy2)
    {
        Y2=yy2;
    }
    string getVrsta()
    {
        return vrstaMa;
    }
};

#endif // MATERIJALI_HPP_INCLUDED
