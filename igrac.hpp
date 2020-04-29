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
	bool Br;
	Pozicija Sko;
   public:
    Igrac(){
        ime="BloodyMasacre";
        pol="Muski";
        bojaKoze="Crna";
        brzina=1,5;
        MaxBrzina=2,5;
    }
    Igrac(string im, string po, string bk, double brzina1, double MaxBrzina1, bool Sk1, bool Br1, double xx, double yy, double zz):Sko(xx,yy,zz){
        ime=im;
        pol=po;
        bojaKoze=bk;
        brzina=brzina1;
        MaxBrzina=MaxBrzina1;
        Sk=Sk1;
        Br=Br1;
    }
    Igrac(const Igrac& I){
        ime=I.ime;
        pol=I.pol;
        bojaKoze=I.bojaKoze;
        brzina=I.brzina;
        MaxBrzina=I.MaxBrzina;
        Sk=I.Sk;
        Br=I.Br;
    }
    string getIme(){return ime;}
    string getPol(){return pol;}
    string getBojaKoze(){return bojaKoze;}
    void setIme(string NovoIme){ime=NovoIme;}
    void setPol(string NoviPol){pol=NoviPol;}
    void setBoja(string NovaBoja){bojaKoze=NovaBoja;}


    Trcanje(){
        if(Br==true && brzina<MaxBrzina){
            brzina=MaxBrzina;
        }
        return brzina;
    }

    Skakanje(){
        int x, y, z;
        if(Sk==true && Br==true){
            return Pozicija(x+1, y, z+1);
            Sleep(1000);
            return Pozicija(x+1,y,z-1);
        }

    }

};

#endif // IGRAC_HPP_INCLUDED
