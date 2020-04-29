#ifndef IGRAC_HPP_INCLUDED
#define IGRAC_HPP_INCLUDED
#include "Pozicija.h"
#include <windows.h>


using namespace std;


class Igrac{
   private:
    string ime;
	string pol;
	string bojaKoze;
	double brzina;
	double MaxBrzina;
	bool Sk;
	Pozicija Sko;
   public:
    Igrac(){
        ime="BloodyMasacre";
        pol="Muski";
        bojaKoze="Crna";
        brzina=1,5;
        MaxBrzina=2,5;
    }
    Igrac(string im, string po, string bk, double brzina1, double MaxBrzina1, bool Sk1, double xx, double yy, double zz):Sko(xx,yy,zz){
        ime=im;
        pol=po;
        bojaKoze=bk;
        brzina=brzina1;
        MaxBrzina=MaxBrzina1;
        Sk=Sk1;

    }
    Igrac(const Igrac& I){
        ime=I.ime;
        pol=I.pol;
        bojaKoze=I.bojaKoze;
        brzina=I.brzina;
        MaxBrzina=I.MaxBrzina;
        Sk=I.Sk;
    }
    string getIme(){return ime;}
    string getPol(){return pol;}
    string getBojaKoze(){return bojaKoze;}
    void setIme(string NovoIme){ime=NovoIme;}
    void setPol(string NoviPol){pol=NoviPol;}
    void setBoja(string NovaBoja){bojaKoze=NovaBoja;}

    Trcanje(){
        if(brzina<MaxBrzina){
            brzina=MaxBrzina;
        }
    }

    Skakanje(){
        if(Sk==true){
            Sko.Pozicija(0+1, 0, 0+1);
            Sleep(1000);
            Sko.Pozicija(x+1,y,z-1);
        }

    }

};

#endif // IGRAC_HPP_INCLUDED
