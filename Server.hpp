#ifndef SERVER_HPP_INCLUDED
#define SERVER_HPP_INCLUDED
#include "igrac.hpp"
#include <vector>

using namespace std;

class Server{
private:
    int ip;
    vector <Igrac*> igraci;
public:
    Server(int ip)
    {
        this->ip=ip;
    }
    void ispis()
    {
        cout<<ip<<endl;
    }
    void dodavanje(Igrac* igra)
    {
        igraci.push_back(igra);
    }
    void ispisiIgrace()
    {
        cout<<"Ip servera je"<<ip<<endl;
        cout<<"Igraca ima"<<endl;
        for(auto it=igraci.begin(); it<igraci.end(); it++)
        {
            (*it)->opis();
        }
    }
    int brojIgraca()
    {
        return igraci.size();
    }
    int brojModeratora()
    {
        int broj=0;
        for(auto it=igraci.begin(); it<igraci.end(); it++)
        {
            if ((*it)->id()==2)
                broj++;
        }
        return broj;
    }
    bool kick(const Igrac& ig)
    {
        for (auto it=igraci.begin(); it<igraci.end(); it++){
            if (ig.getIme()==(*it)->getIme() && ig.getPol()==(*it)->getPol() ){
                igraci.erase(it);
                return true;
            }
        }
        return false;

    }
    void pretrazi(string ime, string pol, string bojakoze){
        bool pronadjen = false;
        for (auto it=igraci.begin(); it<igraci.end(); it++){
            if (ime==(*it)->getIme() && pol==(*it)->getPol()){
                (*it)->opis();
                pronadjen=true;

            }
        }
        if (!pronadjen){
            cout<<"Nema takvih osoba!"<<endl;
        }
    }


};
#endif // SERVER_HPP_INCLUDED
