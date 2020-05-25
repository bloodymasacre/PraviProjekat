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
#include "Server.hpp"
#include "Borba.hpp"
#include <time.h>

int Igrac::broj=0;

void ispis(int vrh, int stek[]){
    int i;
    if(vrh==0){
        printf("Stek je prazan!:)");
    }
    for(i=0;i<vrh;i++){
        printf("%d",stek[i]);
    }
    printf("\n");
}

void isprazniFajl()
{
    ofstream fajl;
    fajl.open("Dobitak.txt", ofstream::out | ofstream::trunc);
    fajl.close();
}
void pisiTxt2(string Dobitak, string tekst)
{
    ofstream fajl;
    fajl.open (Dobitak);
    fajl << tekst << endl;
    fajl.close();
}
void citajDobitak(string Dobitak)
{
    string linija;
    ifstream fajl (Dobitak);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}

ostream& operator<< (ostream& izlaz, const Oruzije& o)
{
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
    izlaz<<"vrsta: "<<z.vrstaZ<<endl;
    izlaz<<"damage: "<<z.damageZ<<endl;
    return izlaz;
}

ostream& operator<< (ostream& izlaz, const Igrac& i)
{
    izlaz<<"Ime: "<<i.ime<<endl;
    izlaz<<"Pol: "<<i.pol<<endl;
    izlaz<<"Bojakoze: "<<i.bojaKoze<<endl;
    izlaz<<"Brzina: "<<i.brzina<<endl;
    izlaz<<"MaxBrzina: "<<i.MaxBrzina<<endl;
    return izlaz;
}

ostream& operator<<(ostream& izlaz, const Dobitak& d)
{
        izlaz<<"Kolicina novca: "<<d.pare<<endl;
        izlaz<<"Kolicina materijala "<< d.kolicinaMat << endl;
        return izlaz;
}


int main()
{
    Igrac i;
    Borba b;
    Zivotinje z;
    Teren t;
    Dobitak d;
    Oruzije o;
    int n;
    int x, y;
    int stek[KAP];
    int vrh=0;
    char mode='a';
    t.pocetak();
    do
    {
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"                   Dobro dosli u igricu                       "<<endl;
        cout<<"    ---------------------------------------------------- "<<endl;
        cout<<"             1.Pomerise po mapi                       "<<endl;
        cout<<"             2.Ispisi mapu                               "<<endl;
        cout<<"             3.Ispisi Dobitak                               "<<endl;
        cout<<"                                                             "<<endl;
        cout<<"                                                             "<<endl;
        cout<<"                                                            "<<endl;
        cout<<"             0.Izadji iz programa                          "<<endl;
        cout<<"    ----------------------------------------------------  "<<endl;
        cout<<"Unesite opciju"<<endl;

        cin>>n;
        switch(n)
        {
        case 1:
            t.pomeranje(x, y);
            b.potezi(i,z,'a');
            break;
        case 2:
            cout<<endl;
            t.ispismapu();
            break;
        case 3:
            ispis(vrh,stek);
            break;
        }
    }
    while(n!=0);

    return 0;

    // Funkcionalnost igrice je da se seta po mapi i skoplja razlicite vrste materijala. Nacini da dobiju materijali su da se nadju u prirodi ili ubiju NPC-evi ili da se ubiju drugi igraci da biste im uzeli iste.
    // Od tih materijala pravite bazu i borite se sa drugim igračima, ciljevi su da raidujete druge baze i tako do resetovanja sveta i tako ispocetka.
}
