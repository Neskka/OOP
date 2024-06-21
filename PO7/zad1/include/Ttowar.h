#ifndef TTOWAR_H
#define TTOWAR_H
#include <string>

using namespace std;

class Ttowar
{
    public:
        Ttowar();
        virtual ~Ttowar();
        void wczytaj();
        float oblicz();
        void wyswietl();

    protected:
        int kod, ilosc;
        string nazwa;
        float cena;

    private:
};

#endif // TTOWAR_H
