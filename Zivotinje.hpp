#ifndef ZIVOTINJE_HPP_INCLUDED
#define ZIVOTINJE_HPP_INCLUDED

class Zivotinje
{
private:
    string vrstaZ;
    int damageZ;    // koliko healta igracu skine kad ga napadne

public:
    Zivotinje()
    {
        vrstaZ="Vuk";
        damageZ=150;
    }
    Zivotinje(string vr, int da)
    {
        vrstaZ=vr;
        damageZ=da;
    }
    Zivotinje(const Zivotinje& Z)
    {
        vrstaZ=Z.vrstaZ;
        damageZ=Z.damageZ;
    }
    friend ostream& operator<< (ostream& izlaz, const Zivotinje& z);
};

class Vuk: public Zivotinje
{
private:
    int healt;
public:
    Vuk():Zivotinje("Vuk", 30), healt(150) {}
    Vuk(string vr, int da, int hea):Zivotinje(vr, da), healt(hea) {}
    Vuk(const Vuk& v):Zivotinje(v), healt(v.healt) {}

};



#endif // ZIVOTINJE_HPP_INCLUDED
