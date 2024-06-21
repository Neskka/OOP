#ifndef TOSOBA_H
#define TOSOBA_H
#include <string>

using namespace std;

class Tosoba
{
    public:
        Tosoba();
        Tosoba(const string &im, const string &naz);
        virtual ~Tosoba();
        void wczytaj();
        void wyswietl();

    protected:
        string imie, nazwisko;

    private:

};

#endif // TOSOBA_H
