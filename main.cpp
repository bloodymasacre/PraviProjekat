#include <iostream>
using namespace std;
#include "igrac.hpp"
#include "Zivotinje.hpp"

int main()
{
    Igrac igrac;
    cout<<igrac.getIme()<<endl;
    cout<<igrac.getPol()<<endl;
    cout<<igrac.getBojaKoze()<<endl;
    return 0;

    // Funkcionalnost igrice je da se seta po mapi i skoplja razlicite vrste materijala. Nacini da dobiju materijali su da se nadju u prirodi ili ubiju NPC-evi ili da se ubiju drugi igraci da biste im uzeli iste.
    // Od tih materijala pravite bazu i borite se sa drugim igračima, ciljevi su da raidujete druge baze i tako do resetovanja sveta i tako ispocetka.
}
