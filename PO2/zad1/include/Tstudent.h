#ifndef TSTUDENT_H
#define TSTUDENT_H
#include <string>

using namespace std;

class Tstudent
{
    public:
        Tstudent();
        virtual ~Tstudent();
        void wczytaj();
        float srednia();
        void wyswietl();

    protected:

    private:
        string imie, nazwisko;
        float oceny[3];
};

#endif // TSTUDENT_H
