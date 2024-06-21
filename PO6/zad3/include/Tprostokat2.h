#ifndef TPROSTOKAT2_H
#define TPROSTOKAT2_H
#include <string>
#include <Ifigura.h>

using namespace std;

class Tprostokat2 : public Ifigura
{
    public:
        Tprostokat2();
        Tprostokat2(string naz);
        virtual ~Tprostokat2();
        void info();
        void rysuj();
        void wczytajDane();
        float pole();
        float obwod();

    protected:
        float a, b;

    private:
};

#endif // TPROSTOKAT2_H
