#include <iostream>
using namespace std;
#include "igrac.hpp"
#include "Zivotinje.hpp"
#include "Oruzije.hpp"
#include "Pistolji.h"
#include "Orudje.hpp"
#include "Oprema.hpp"
#include "Eksploziv.hpp"
#include "Axe.h"
#include "Gradjevine.h"
#include "Materijali.hpp"
#include "Puske.h"
#include "Medikamenti.hpp"
#include "Teren.hpp"
#include "Healt.hpp"
#include "Inventori.hpp"
#include "Kutije.hpp"
#include "Pozicija.h"
#include "Vozila.hpp"
#include "Vreme.hpp"
#include "Hrana.hpp"
#include "Pickaxe.h"

int Igrac::broj=0;

ostream& operator<< (ostream& izlaz, const Oruzije& o)
{
    cout<<"Puska: "<<endl;
    izlaz<<"recept: "<<o.recept<<endl;
    izlaz<<"izdrzljivost: "<<o.izdrzljivost<<endl;
    izlaz<<"primitivnost: "<<o.primitivno<<endl;
    izlaz<<"naDaljinu: "<<o.Nadaljinu<<endl;
    izlaz<<"Damage: "<<o.damageO<<endl;
    izlaz<<"ammo: "<<o.ammo<<endl;
    izlaz<<"sarzer: "<<o.sarzer<<endl;
    return izlaz;
}

ostream& operator<< (ostream& izlaz, const Zivotinje& z)
{
    cout<<"Zivotinja: "<<endl;
    izlaz<<"vrsta: "<<z.vrstaZ<<endl;
    izlaz<<"damage: "<<z.damageZ<<endl;
    return izlaz;
}

ostream& operator<< (ostream& izlaz, const Igrac& i)
{
    cout<<"Igrac: "<<endl;
    izlaz<<"Ime: "<<i.ime<<endl;
    izlaz<<"Pol: "<<i.pol<<endl;
    izlaz<<"Bojakoze: "<<i.bojaKoze<<endl;
    izlaz<<"Brzina: "<<i.brzina<<endl;
    izlaz<<"MaxBrzina: "<<i.MaxBrzina<<endl;
    return izlaz;
}

int main()
{
    Igrac igrac;
    Igrac igrac2;
    Oruzije o;
    Zivotinje z;
    cout<<igrac<<endl<<endl;
    cout<<igrac2<<endl<<endl;
    //citajOruzije("oruzije2.txt");
    cout<<o<<endl<<endl;
    cout<<z<<endl<<endl;
    cout<<"Online je:"<<igrac.getBroj()<<" igraca"<<endl;
    return 0;

    // Funkcionalnost igrice je da se seta po mapi i skoplja razlicite vrste materijala. Nacini da dobiju materijali su da se nadju u prirodi ili ubiju NPC-evi ili da se ubiju drugi igraci da biste im uzeli iste.
    // Od tih materijala pravite bazu i borite se sa drugim igračima, ciljevi su da raidujete druge baze i tako do resetovanja sveta i tako ispocetka.
}
