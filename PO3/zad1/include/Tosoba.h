#ifndef TOSOBA_H
#define TOSOBA_H
#include <string>

using namespace std;

struct Tdata
{
    int d, m, r;
};

class Tosoba
{
    public:
        Tosoba();
        Tosoba(const string &im, const string &naz, Tdata dd);
        virtual ~Tosoba();
        void wczytaj();
        void wyswietl();
        void wyswietl(int rok);
        void info();
        void info(int rok);

    protected:

    private:
        string imie, nazwisko;
        Tdata data;
};

#endif // TOSOBA_H
