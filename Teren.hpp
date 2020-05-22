#ifndef TEREN_HPP_INCLUDED
#define TEREN_HPP_INCLUDED
#include "igrac.hpp"
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>

class Teren
{
protected:
    char polja[10][10];
    string voda;
    string vegetacija;
    Igrac ja;
public:
    void napunimapu()
    {
        int i,j;
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                char letters[] = { 'n', 'm','g'} ;
                char x = letters[rand() %3];
                polja[i][j]=x;
            }
        }
    }
    bool pomeranje(int x, int y)
    {
        int xx, yy;
        int s;
        s=2;
        xx=ja.getX();
        yy=ja.getY();
        if(((xx-x<=s)||(xx-x<=-s)) && ((yy-y<=s)||(yy-s<=-s)))
        {
            ja.setX(x);
            ja.setY(y);
            return true;
        }
        else if((xx-x>=s)||(xx-x>=-s))
        {
            cout<<"Uneli ste prevelike vrednosti za x. Podsecam Vas da je limit 2 mesta."<<endl;
            return false;
        }
        else
        {
            cout<<"Uneli ste prevelike vrednosti za y. Podsecam Vas da je limit 2 mesta."<<endl;

        }
    }
    void pocetak()
    {
        polja[0][0];
        ja.setX(0);
        ja.setY(0);
    }
    void ispismape()
    {
        int i,j;
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                cout<<polja[i][j]<<",";
            }
            cout<<endl;
        }
    }
    char getpolja()
    {
        char letters[] = { 'n', 'm','g'} ;
        char x = letters[rand() %3];
        return x;
    }
    void setpolja(char n)
    {
        int i,j;
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                polja[i][j]=n;
            }
        }
    }
};


#endif // TEREN_HPP_INCLUDED
