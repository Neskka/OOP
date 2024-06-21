#ifndef TSTUDENT_H
#define TSTUDENT_H
#include <string>
#include <Tosoba.h>

using namespace std;

class Tstudent : public Tosoba
{
    public:
        Tstudent();
        Tstudent(const string &imie, const string &nazwisko, string uczelnia, int liczbaOcen);
        virtual ~Tstudent();
        void wczytaj();
        void wczytajOceny();
        float srednia();
        void wyswietl();

    protected:
        string uczelnia;
        int liczbaOcen;
        float *oceny = new float[liczbaOcen];

    private:
};

#endif // TSTUDENT_H
