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
        brzina=1.5;
        MaxBrzina=2.5;
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
    string getIme() const
    {
        return ime;
    }
    string getPol() const
    {
        return pol;
    }
    string getBojaKoze() const
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
    ~Igrac()
    {
        broj--;
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
    virtual int id()
    {
        return 0;
    }
    virtual void opis()
    {
        cout<<"Ja "<<ime<<" "<<"imam akaunt"<<endl;
    }
    friend ostream& operator<< (ostream& izlaz, const Igrac& i);
};

class Premium: public Igrac
{
private:
    bool premium;
public:
    Premium(string i="Mimi", string p="muski", string bk="bela", double br=1, bool premium=true):Igrac(i, p, bk, br)
    {
        this->premium=premium;
    }
    Premium(const Premium& p):Igrac(p)
    {
        premium=p.premium;
    }
    int id()
    {
        return 1;
    }
    void opis()
    {
        Igrac::opis();
        if(premium)
            cout<<"ali je moj premium"<<endl;
        else
            cout<<"ali moj nije premium"<<endl;
    }
};

class Moderator:public Igrac
{
private:
    string roles;
public:
    Moderator(string n="Sasa", string s="muski", string c="crna", double sp=1, string z="Owner"):Igrac(n,s,c,sp)
    {
        roles=z;
    }
    Moderator(const Moderator& m):Igrac(m)
    {
        roles=m.roles;
    }
    int id()
    {
        return 2;
    }
    void opis()
    {
        Igrac::opis();
        cout<<"a moj role je: "<<roles<<endl;
    }
};


#endif // IGRAC_HPP_INCLUDED
