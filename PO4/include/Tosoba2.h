#ifndef TOSOBA2_H
#define TOSOBA2_H
#include <iostream>
#include <sstream>
#include "Tdata.h"

using namespace std;

class Tosoba2
{
    public:
        Tosoba2();
        virtual ~Tosoba2();
        Tosoba2(const std::string & nazwisko, const std::string & imie, const Tdata & d);
        void wczytaj();
        void wyswietl();
        string GetNazwiskoImie();
        int roznicaWieku(Tosoba2 & partner);
        Tosoba2 dluzszeNazwisko(Tosoba2 &partner);
    protected:

    private:
        string nazwisko, imie, motto;
        Tdata dataUr;
};

#endif // TOSOBA2_H
