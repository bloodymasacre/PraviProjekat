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

int main()
{
    Igrac igrac;
    cout<<igrac.getIme()<<endl;
    cout<<igrac.getPol()<<endl;
    cout<<igrac.getBojaKoze()<<endl;
    //pisiTxt("ruzije2.txt", "" );
    citajOruzije("oruzije2.txt");
    return 0;

    // Funkcionalnost igrice je da se seta po mapi i skoplja razlicite vrste materijala. Nacini da dobiju materijali su da se nadju u prirodi ili ubiju NPC-evi ili da se ubiju drugi igraci da biste im uzeli iste.
    // Od tih materijala pravite bazu i borite se sa drugim igračima, ciljevi su da raidujete druge baze i tako do resetovanja sveta i tako ispocetka.
}
