#ifndef GRADJEVINE_H_INCLUDED
#define GRADJEVINE_H_INCLUDED

class Gradjevine
{
private:
    bool populacija;
    bool sigurnost;
    bool zagonetke;
    int X3;
    int Y3;
public:
    Gradjevine()
    {
        populacija=true;
        sigurnost=true;
        zagonetke=false;
    }
    Gradjevine(bool pp, bool si, bool za)
    {
        pp=populacija;
        si=sigurnost;
        za=zagonetke;
    }
    Gradjevine(const Gradjevine& g)
    {
        populacija=g.populacija;
        sigurnost=g.sigurnost;
        zagonetke=g.zagonetke;
    }
    int getX3()
    {
        return X3;
    }
    int getY3()
    {
        return Y3;
    }
    void setX3(int xx3)
    {
        X3=xx3;
    }
    void setY3(int yy3)
    {
        Y3=yy3;
    }
};

#endif // GRADJEVINE_H_INCLUDED
