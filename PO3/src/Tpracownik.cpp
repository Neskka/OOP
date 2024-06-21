#include "Tpracownik.h"
#include <iostream>
#include <string>

using namespace std;

Tpracownik::Tpracownik()
{
    cout << "Utworzono obiekt konstruktorem domyslnym klasy Tpracownik" << endl;
}

Tpracownik::Tpracownik(string imie, string nazwisko, string firma):Tosoba(imie, nazwisko)
{
    firma = firma;
}

Tpracownik::~Tpracownik()
{
    cout << "Usunieto obiekt destruktorem klasy Tpracownik" << endl;
}

void Tpracownik::wczytaj()
{
    Tosoba::wczytaj();
    cout << "Podaj firme: ";
    cin.ignore();
    getline(cin, firma);
}

void Tpracownik::wyswietl()
{
    Tosoba::wyswietl();
    cout << firma << endl;
}
