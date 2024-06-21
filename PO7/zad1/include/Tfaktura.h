#ifndef TFAKTURA_H
#define TFAKTURA_H
#include <string>
#include <Tdokument.h>
#include "Tklient.h"
#include "Ttowar.h"

using namespace std;

class Tfaktura : public Tdokument
{
    public:
        Tfaktura();
        Tfaktura(Tklient *k, int n);
        virtual ~Tfaktura();
        void wczytaj();
        void wyswietl();
        float suma();

    protected:
        Tklient *klient; //wskaznik na klienta - asocjacja
        Ttowar *towar; //tablica dynamiczna - agregacja
        int liczbaPozycji;

    private:
};

#endif // TFAKTURA_H
