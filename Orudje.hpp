#ifndef ORUDJE_HPP_INCLUDED
#define ORUDJE_HPP_INCLUDED

class Orudje{
   private:
	string receptO;
	int izdrzljivost;
	int efikasnost;
   public:
    Orudje(){
        receptO="drvo, metal"
        izdrzljivost=150;  // 150 udaraca
        efikasnost=40;   // dobijamo 40 drveta kad ga udarimo ili 40 kamena kad kamen udarimo itd.
    }
}

#endif // ORUDJE_HPP_INCLUDED
