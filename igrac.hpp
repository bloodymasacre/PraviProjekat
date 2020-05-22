#ifndef IGRAC_HPP_INCLUDED
#define IGRAC_HPP_INCLUDED
#include "Pozicija.h"
#include <windows.h>


using namespace std;


class Igrac
{
protected:
    string ime;
    string pol;
    string bojaKoze;
    double brzina;
    double MaxBrzina;
    static int broj;
    int healt;
    int X;
    int Y;
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
    Igrac(string im, string po, string bk, double brzina1, double MaxBrzina1)
    {
        ime=im;
        pol=po;
        bojaKoze=bk;
        brzina=brzina1;
        MaxBrzina=MaxBrzina1;
        broj++;
    }
    Igrac(const Igrac& I)
    {
        ime=I.ime;
        pol=I.pol;
        bojaKoze=I.bojaKoze;
        brzina=I.brzina;
        MaxBrzina=I.MaxBrzina;
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
    int getX()
    {
        return X;
    }
    int getY()
    {
        return Y;
    }
    void setX(int xx)
    {
        X=xx;
    }
    void setY(int yy)
    {
        Y=yy;
    }
    int gethealt()
    {
        return healt;
    }
    void setHealt(int healt2)
    {
        healt=healt2;
    }
    static int getStaBroj()
    {
        return broj;
    }
    ~Igrac()
    {
        broj--;
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
    Premium(string im, string po, string bk, double brzina1, double MaxBrzina1, bool premium):Igrac(im, po, bk, brzina1, MaxBrzina1)
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
    Moderator(string im, string po, string bk, double brzina1, double MaxBrzina1, string z):Igrac(im, po, bk, brzina1, MaxBrzina1)
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
