#ifndef BORBA_HPP_INCLUDED
#define BORBA_HPP_INCLUDED
#include "igrac.hpp"
#include "Zivotinje.hpp"
#include "Oruzije.hpp"
#include "Teren.hpp"
#include "Materijali.hpp"
#define KAP 10

void push(int vrh, int element, int stek[], char mode='a')
{
ofstream fajl;
if (mode='a')
{
    fajl.open ("izvestaj.txt", ios_base::app);
    if((vrh)<KAP)
    {
            stek[(vrh)++]=element;
    fajl << element << endl;
    fajl.close ();
    }

}
    else
        exit(0);
}

class Dobitak
{
protected:
    int pare=0;
    int kolicinaMat=0;
public:
    void setPare(int ko)
    {
        pare=ko;
    }
    void setMaterijal(int ma)
    {
        kolicinaMat=ma;
    }
    int getStaraVrednost()
    {
        return pare;
    }
    int getPare()
    {
        return pare;
    }
    int getkolicinaMat()
    {
        return kolicinaMat;
    }
    friend ostream& operator<< (ostream& izlaz, const Dobitak& d);
};

class Borba
{
private:
    bool pobednik;
    Igrac i;
    Zivotinje z;
    Oruzije o;
    Materijal m;
    Dobitak d;
    Teren t;
    Gradjevine g;
    int stek[KAP];
    int vrh=0;
public:
    int potezi(Igrac igr, Zivotinje ziv, char mode='a')
    {
        int polja[10][10];
        int i,j;
        int x,y;
        x=d.getPare();
        y=d.getkolicinaMat();
        int healt;
        int a,b,c,d;
        bool turn;
        a=200;
        b=50;
        c=150;
        d=30;
        if(polja[i][j]==polja[0][3] || polja[i][j]==polja[2][0] || polja[i][j]==polja[2][3] || polja[i][j]==polja[4][0] || polja[i][j]==polja[4][4])
        {
            do
            {
                c-=b;
                a-=d;
            }
            while(a!=0 && c!=0);
                if(a<=0)
                {
                    cout<<"Izgubio si";
                    x-=5;
                    a=200;
                    push(vrh,x,stek);
                }
                else
                {
                    cout<<"Podbedio si";
                        x+=15;
                        y+=15;
                        push(vrh,x,stek);
                        push(vrh,y,stek);
                        a=200;
                }
        }
        else if(polja[i][j]==polja[0][2] || polja[i][j]==polja[0][4] || polja[i][j]==polja[1][0] || polja[i][j]==polja[1][3] || polja[i][j]==polja[2][1] || polja[i][j]==polja[2][4] || polja[i][j]==polja[3][0] || polja[i][j]==polja[3][2] || polja[i][j]==polja[4][1] || polja[i][j]==polja[4][3])
        {
            cout<<"Pokupili ste "<< m.getVrsta()<<endl;
            x+=5;
            y+=5;
            push(vrh,x,stek);
            push(vrh,y,stek);
        }
        else if(polja[i][j]==polja[1][1] || polja[i][j]==polja[2][2] || polja[i][j]==polja[4][2] || polja[i][j]==polja[3][4] || polja[i][j]==polja[1][4])
        {
            int n;
            cout<<"Da li zelite da kupite gradjevinu?"<<endl;
            cout<<"Gradjevina kosta 40 novcica."<<endl;
            cout<<"Pritisnite 0 da kupite."<<endl;
            cout<<"Da ne kupite pritisnite 1."<<endl;
            cin>>n;
            if(n==0 && x>=40 && y>=0)
            {
                cout<<"Uspesno ste kupili gradjevinu."<<endl;
                x-=40;
                y-=40;
                push(vrh,x,stek);
                push(vrh,y,stek);
            }
            else{
                cout<<"Niste kupili gradjevinum ili nemate dovoljno novcica."<<endl;
            }
        }
    }
};



#endif // BORBA_HPP_INCLUDED
