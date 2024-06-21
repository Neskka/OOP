#ifndef IFIGURA_H
#define IFIGURA_H
#include <string>

using namespace std;

class Ifigura
{
    public:
        Ifigura();
        Ifigura(string naz);
        virtual ~Ifigura();
        virtual void info();
        virtual void rysuj();
        virtual float pole();
        virtual float obwod();
        void wyswietl();

    protected:
        string nazwa;

    private:
};

#endif // IFIGURA_H
