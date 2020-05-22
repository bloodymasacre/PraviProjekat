#ifndef ORUZIJE_HPP_INCLUDED
#define ORUZIJE_HPP_INCLUDED
#include "fstream"


class Oruzije
{
private:
    string recept;
    int izdrzljivost;
    bool primitivno;
    bool Nadaljinu;
    int damageO;
    int ammo;
    int sarzer;
    bool levi_klik;
    bool R;
public:
    Oruzije()
    {
        recept="metal, body, HQM";
        izdrzljivost=250;
        primitivno=false;
        Nadaljinu=true;
        damageO=30;
    }
    bool Pucanje()
    {
        ammo=40;
        while(ammo=!0 && levi_klik==true)
        {
            ammo--;
            return true;
        }
        return false;
    }
    bool Reload()
    {
        sarzer=5;
        if(ammo==0 && sarzer!=0 && R==true)
        {
            Sleep(1000);
            ammo=40;
            return true;
        }
        return false;
    }
    int getDamaggg()
    {
        return damageO;
    }
    void setDamaggg(int dama)
    {
        damageO=dama;
    }
    friend ostream& operator<< (ostream& izlaz, const Oruzije& o);

};

void pisiTxt(string oruzije2, string tekst)
{
    ofstream fajl;
    fajl.open (oruzije2);
    fajl << tekst << endl;
    fajl.close();
}

void citajOruzije(string oruzije2)
{
    string linija;
    ifstream fajl (oruzije2);
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

#endif // ORUZIJE_HPP_INCLUDED
