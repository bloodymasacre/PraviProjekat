#ifndef IGRAC_HPP_INCLUDED
#define IGRAC_HPP_INCLUDED

using namespace std;

class Igrac{
   private:
    string ime;
	string pol;
	string bojaKoze;
   public:
    Igrac(){
        ime="BloodyMasacre";
        pol="Muski";
        bojaKoze="Crna";
    }
    Igrac(string im, string po, string bk){
        ime=im;
        pol=po;
        bojaKoze=bk;
    }
    Igrac(const Igrac& I){
        ime=I.ime;
        pol=I.pol;
        bojaKoze=I.bojaKoze;
    }
    string getIme(){return ime;}
    string getPol(){return pol;}
    string getBojaKoze(){return bojaKoze;}
    void setIme(string NovoIme){ime=NovoIme;}
    void setPol(string NoviPol){pol=NoviPol;}
    void setBoja(string NovaBoja){bojaKoze=NovaBoja;}
};

#endif // IGRAC_HPP_INCLUDED
