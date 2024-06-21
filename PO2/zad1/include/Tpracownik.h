#ifndef TPRACOWNIK_H
#define TPRACOWNIK_H
#include <string>

using namespace std;

struct Tdata
{
    int d, m, r;
};

class Tpracownik
{
    public:
        Tpracownik();
        virtual ~Tpracownik();
        void wczytaj();
        float placa();
        void wyswietl();

    protected:

    private:
        string imie, nazwisko;
        float stawka;
        int liczbaGodzin;
        Tdata data;
};

#endif // TPRACOWNIK_H
