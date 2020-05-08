#ifndef IGRAC_HPP_INCLUDED
#define IGRAC_HPP_INCLUDED
#include "Pozicija.h"
#include <windows.h>


using namespace std;


class Igrac
{
private:
    string ime;
    string pol;
    string bojaKoze;
    double brzina;
    double MaxBrzina;
    bool Sk;
    bool Br;
    Pozicija Sko;
    static int broj;
public:
    Igrac()
    {
        ime="BloodyMasacre";
        pol="Muski";
        bojaKoze="Crna";
        brzina=1,5;
        MaxBrzina=2,5;
        broj++;
    }
    Igrac(string im, string po, string bk, double brzina1, double MaxBrzina1, bool Sk1, bool Br1, double xx, double yy, double zz):Sko(xx,yy,zz)
    {
        ime=im;
        pol=po;
        bojaKoze=bk;
        brzina=brzina1;
        MaxBrzina=MaxBrzina1;
        Sk=Sk1;
        Br=Br1;
        broj++;
    }
    Igrac(const Igrac& I)
    {
        ime=I.ime;
        pol=I.pol;
        bojaKoze=I.bojaKoze;
        brzina=I.brzina;
        MaxBrzina=I.MaxBrzina;
        Sk=I.Sk;
        Br=I.Br;
        broj++;
    }
    string getIme()
    {
        return ime;
    }
    string getPol()
    {
        return pol;
    }
    string getBojaKoze()
    {
        return bojaKoze;
    }
    void setIme(string NovoIme)
    {
        ime=NovoIme;
    }
    void setPol(string NoviPol)
    {
        pol=NoviPol;
    }
    void setBoja(string NovaBoja)
    {
        bojaKoze=NovaBoja;
    }
    int getBroj()
    {
        return broj;
    }
    static int getStaBroj()
    {
        return broj;
    }


    bool Trcanje()
    {
        if(Br==true && brzina<MaxBrzina)
        {
            brzina=MaxBrzina;
            return true;
        }
        return false;
    }

    bool Skakanje()
    {
        int x, y, z;
        if(Sk==true && Br==true)
        {
            Pozicija(x+1, y, z+1);
            Sleep(1000);
            Pozicija(x+1,y,z-1);
            return true;
        }
        return false;
    }
    friend ostream& operator<< (ostream& izlaz, const Igrac& i);
};

#endif // IGRAC_HPP_INCLUDED
