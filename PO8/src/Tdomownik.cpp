#include "Tdomownik.h"
#include <iostream>

using namespace std;

int Tdomownik::kod = 1234;

Tdomownik::Tdomownik(const string& nazwa, const string& sekret, int kod)
{
    this->nazwa = nazwa;
    this->sekret = sekret;
    this->kod = kod;
}

Tdomownik::~Tdomownik()
{
    //dtor
}

void Tdomownik::setkod(int nowyKod)
{
    kod = nowyKod;
}

int Tdomownik::getkod()
{
    return kod;
}

void Tdomownik::wyswietl()
{
    cout << nazwa << endl;
    cout << "Sekret: " << sekret << endl;
}

string sasiad(Tdomownik& domownik)
{
    Tdomownik::kod = 9999;
    return domownik.sekret;
}

Tsasiad::Tsasiad(const string& nazwa)
{
    this->nazwa = nazwa;
}

void Tsasiad::info(Tdomownik& domownik)
{
    cout << "Ja sasiad " << nazwa << " znam sekret domownika " << domownik.nazwa << ": " << domownik.sekret << " i kod do ich domu " << Tdomownik::getkod() << endl;
}
