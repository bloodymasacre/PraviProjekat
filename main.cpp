#include <iostream>
#include "igrac.hpp"
#include "Zivotinje.hpp"

using namespace std;

int main()
{
    Igrac igrac;
    cout<<igrac.getIme()<<endl;
    cout<<igrac.getPol()<<endl;
    cout<<igrac.getBojaKoze()<<endl;
    return 0;

    // U metodi trcanje ako igrac pritisne dugme za trcanje on tada iz stanja mirovanja ili setanja prelazi u trcanje.
    // U metodi skakanje ako pritisnemo istovremeno dugme za trcanje i dugme za skakanje, igrac skoci metar u vis i pri doskoku na zemlju ukupno se pomeri 2 metra u napred.
    // U metodi pucanje ako igrac drzi dugme za pucanje i ima metkova, on puca.
    // U metodi reload ako igrac drzi dugme za reload, nema municije, a ima barem 1 sarzer on reloaduje.
}
