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
                char letters[3] = { 'n', 'm','g'} ;
                char x = letters[rand() %3+1];
                polja[i][j]=x;
            }
        }
    }
    void pomeranje(int x, int y)
    {
        int n;
    do
    {
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"                         Kretanje                         "<<endl;
        cout<<"    ---------------------------------------------------- "<<endl;
        cout<<"             1.Pomerise napred                            "<<endl;
        cout<<"             2.Pomeri se nazad                             "<<endl;
        cout<<"             3.Pomeri se levo                               "<<endl;
        cout<<"             4.Pomeri se desno                               "<<endl;
        cout<<"                                                             "<<endl;
        cout<<"                                                            "<<endl;
        cout<<"             0.Vrati se u pocetni meni                     "<<endl;
        cout<<"    ----------------------------------------------------  "<<endl;
        cout<<"Unesite opciju"<<endl;

        cin>>n;
        switch(n)
        {
        case 1:
            x=ja.getX()+1;
            if(x<=10){
            ja.setX(x);
            }
            else
            {
                system("cls");
                cout<<"Presli ste limit."<<endl;
            }
            break;
        case 2:
            x=ja.getX()-1;
            if(x<=10){
            ja.setX(x);
            }
            else
            {
                system("cls");
                cout<<"Presli ste limit."<<endl;
            }ja.setX(x);
            break;
        case 3:
            y=ja.getY()+1;
            if(y<=10){
            ja.setY(y);
            }
            else
            {
                system("cls");
                cout<<"Presli ste limit."<<endl;
            }ja.setX(x);
            break;
        case 4:
            y=ja.getY()-1;
            if(y<=10){
            ja.setX(y);
            }
            else
            {
                system("cls");
                cout<<"Presli ste limit."<<endl;
            }ja.setX(x);
            break;
        case 0:
            system("cls");
            return;
        }
    }
    while(n!=0);
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
        cout<<endl;
    }
    char getpolja()
    {
        char letters[] = { 'n', 'm','g'} ;
        char x = letters[rand() %3+1];
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
