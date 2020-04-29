#ifndef ORUZIJE_HPP_INCLUDED
#define ORUZIJE_HPP_INCLUDED

class Oruzije{
   private:
	string recept;
	int izdrzljivost;
	bool primitivno;
	bool Nadaljinu;
	int damageO;
	int ammo;
	int sarzer;
	bool levi_klik;
	bool R,
   public:
    Oruzije(){
        recept="metal, body, HQM"
        izdrzljivost=250;
        primitivno=false;
        Nadaljinu=true;
        damageO=30;
    }
    Pucanje(){
        ammo=40;
        while(ammo=!0 && levi_klik==true){
            ammo--;
        }
    }
    Reload(){
        ammo=40;
        sarzer=5;
        if(ammo==o && sarzer=!0 && R==true){
            Sleep(1000);
            ammo=40;
        }
    }
};

#endif // ORUZIJE_HPP_INCLUDED
