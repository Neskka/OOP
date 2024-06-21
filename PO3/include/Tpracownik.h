#ifndef TPRACOWNIK_H
#define TPRACOWNIK_H
#include <string>
#include <Tosoba.h>

using namespace std;

class Tpracownik : public Tosoba
{
    public:
        Tpracownik();
        Tpracownik(string imie, string nazwisko, string firma);
        ~Tpracownik();
        void wczytaj();
        void wyswietl();

    protected:
        string firma;

    private:
};

#endif // TPRACOWNIK_H
