#ifndef TEREN_HPP_INCLUDED
#define TEREN_HPP_INCLUDED
#include <cstdlib>
#include <time.h>
#include "igrac.hpp"

class Teren
{
protected:
    int polja[5][5];
    string voda;
    string vegetacija;
    Igrac ja;
public:
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
            if(x<=5){
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
            if(x<=5){
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
            if(y<=5){
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
            if(y<=5){
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
    void ispismapu()
    {
        int i,j;
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(polja[i][j]==polja[0][3] || polja[i][j]==polja[2][0] || polja[i][j]==polja[2][3] || polja[i][j]==polja[4][0] || polja[i][j]==polja[4][4])
                {
                    cout<<"n"<<",";
                }
                else if(polja[i][j]==polja[0][2] || polja[i][j]==polja[0][4] || polja[i][j]==polja[1][0] || polja[i][j]==polja[1][3] || polja[i][j]==polja[2][1] || polja[i][j]==polja[2][4] || polja[i][j]==polja[3][0] || polja[i][j]==polja[3][2] || polja[i][j]==polja[4][1] || polja[i][j]==polja[4][3])
                {
                    cout<<"m"<<",";
                }
                else if(polja[i][j]==polja[1][1] || polja[i][j]==polja[1][4] || polja[i][j]==polja[2][2] || polja[i][j]==polja[3][4] || polja[i][j]==polja[4][2])
                {
                    cout<<"g"<<",";
                }
                else
                {
                    cout<<" "<<",";
                }
            }
            cout<<endl;
        }
        cout<<endl;
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

/* ovako bi trebalo da izgleda mapa ali ne radi


    x, ,m,n,m
    m,g, ,m,g
    n,m,g,n,m
    m, ,m, ,g
    n,m,g,m,n
*/


#endif // TEREN_HPP_INCLUDED
