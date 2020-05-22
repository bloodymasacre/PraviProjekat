#ifndef ZIVOTINJE_HPP_INCLUDED
#define ZIVOTINJE_HPP_INCLUDED

class Zivotinje
{
private:
    string vrstaZ;
    int damageZ;    // koliko healta igracu skine kad ga napadne
    int healt5;
    int X1;
    int Y1;
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
    int getDamage()
    {
        return damageZ;
    }
    int getHeastt()
    {
        return healt5;
    }
    void setDamage(int da)
    {
        damageZ=da;
    }
    void setHeastt(int ha)
    {
        healt5=ha;
    }
    int getX1()
    {
        return X1;
    }
    int getY1()
    {
        return Y1;
    }
    void setX1(int xx1)
    {
        X1=xx1;
    }
    void setY1(int yy1)
    {
        Y1=yy1;
    }
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
