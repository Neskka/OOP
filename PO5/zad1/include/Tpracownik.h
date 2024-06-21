#ifndef TPRACOWNIK_H
#define TPRACOWNIK_H
#include <string>
#include <Tosoba.h>

using namespace std;

class Tpracownik : public Tosoba
{
    public:
        Tpracownik();
        Tpracownik(const string &imie, const string &nazwisko, const string firma);
        virtual ~Tpracownik();
        void wczytaj();
        void wyswietl();

    protected:
        string firma;

    private:
};

#endif // TPRACOWNIK_H
