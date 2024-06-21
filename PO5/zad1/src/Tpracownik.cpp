#include "Tpracownik.h"
#include <iostream>

using namespace std;

Tpracownik::Tpracownik()
{
    //ctor
}

Tpracownik::Tpracownik(const string &imie, const string &nazwisko, string firma):Tosoba(imie, nazwisko)
{
    firma = firma;
}

Tpracownik::~Tpracownik()
{
    //dtor
}

void Tpracownik::wczytaj()
{
    Tosoba::wczytaj();
    cout << "Podaj firme: ";
    cin >> firma;
}

void Tpracownik::wyswietl()
{
    Tosoba::wyswietl();
    cout << firma << endl;
}
