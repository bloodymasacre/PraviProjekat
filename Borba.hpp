#ifndef BORBA_HPP_INCLUDED
#define BORBA_HPP_INCLUDED
#include "igrac.hpp"
#include "Zivotinje.hpp"
#include "Oruzije.hpp"
#include "Teren.hpp"
#include "Materijali.hpp"

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
public:
    int potezi(Igrac igr, Zivotinje ziv, char mode='a')
    {
        int x,y;
        x=d.getPare();
        y=d.getkolicinaMat();
        int healt;
        int a,b,c,d;
        bool turn;
        a=i.gethealt();
        b=o.getDamaggg();
        c=z.getHeastt();
        d=z.getDamage();
        t.setpolja(t.getpolja());
        if(i.getX()==z.getX1() && i.getY()==z.getY1())
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
                    healt=i.gethealt();
                    return x, y;
                }
                else
                {
                    cout<<"Podbedio si";
                        x+=15;
                        y+=15;
                        healt=i.gethealt();
                        return x, y;
                }
        }
        else if(i.getX()==m.getX2() && i.getY()==m.getY2())
        {
            cout<<"Pokupili ste "<< m.getVrsta()<<endl;
            x+=5;
            y+=5;
            return x, y;
        }
        else if(i.getX()==g.getX3() && i.getY()==g.getY3())
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
                return x, y;
            }
            else{
                cout<<"Niste kupili gradjevinum ili nemate dovoljno novcica."<<endl;
            }
        }
    }
};



#endif // BORBA_HPP_INCLUDED
