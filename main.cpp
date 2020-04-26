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
}
