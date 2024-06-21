#ifndef TSAMOCHOD_H
#define TSAMOCHOD_H
#include <string>

using namespace std;

class Tsamochod
{
    public:
        Tsamochod();
        Tsamochod(const string &numer, const string &mar, const string &mod, const float c, const float stan);
        Tsamochod(Tsamochod &samochod2);
        virtual ~Tsamochod();
        void wczytaj();
        void zwiekszenieStanuLicznika();
        void wyswietl();

    protected:

    private:
        string nr, marka, model;
        float cena, stanLicznika;
};

#endif // TSAMOCHOD_H
