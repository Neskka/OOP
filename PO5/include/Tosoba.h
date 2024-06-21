#ifndef TOSOBA_H
#define TOSOBA_H
#include <iostream>
#include <string>

using namespace std;

class Tosoba
{
    public:
        Tosoba();
        Tosoba(string i, string m);
        virtual ~Tosoba();
        void wczytaj();
        void wyswietl();

    protected:
        string imie, nazwisko; //niewidoczne w mainie, widoczne w potomku

    private:
};

#endif // TOSOBA_H
