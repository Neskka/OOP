#ifndef TOSOBA_H
#define TOSOBA_H
#include <string> //obsluga klasy string

using namespace std;

struct Tdata
{
    int d, m, r;
};

class Tosoba
{
    public:
        Tosoba(); //konstruktor domyslny
        Tosoba(const char *naz, const string &im, Tdata dd); //konstruktor z parametrami przeciazony
        ~Tosoba(); //destruktor
        void wczytaj();
        void wyswietl();
        void wyswietl(int rok);
        void info();
        void info(int rok);

    protected:

    private:
        char nazwisko[25];
        string imie;
        Tdata dataUr;
};

#endif // TOSOBA_H
