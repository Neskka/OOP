#ifndef TOSOBA2_H
#define TOSOBA2_H
#include <string>
#include "Tdata.h"

using namespace std;

class Tosoba2
{
    public:
        Tosoba2();
        Tosoba2(const string &im, const string &naz, Tdata data);
        virtual ~Tosoba2();
        void wczytaj();
        void wyswietl();
        string getNazwiskoImie();
        int roznicaWieku(Tosoba2 & partner);
        Tosoba2 dluzszeNazwisko(Tosoba2 & partner);
        string getNazwisko();

    protected:

    private:
        string imie, nazwisko, motto;
        Tdata dataUr;
};

#endif // TOSOBA2_H
