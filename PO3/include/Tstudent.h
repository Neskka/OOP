#ifndef TSTUDENT_H
#define TSTUDENT_H

#include <Tosoba.h>
#include <iostream>
#include <string>

using namespace std;

class Tstudent : public Tosoba
{
    public:
        Tstudent();
        Tstudent(string imie, string nazwisko, string uczelnia, int liczbaOcen);
        virtual ~Tstudent();
        void wczytaj();
        void wczytajOceny();
        void wyswietl();
        float srednia();
        bool czyZaliczyl();

    protected:
        string uczelnia;
        int liczbaOcen;
        float *oceny;

    private:
};

#endif // TSTUDENT_H
