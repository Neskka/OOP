#include "Tosoba.h"
#include <iostream>
#include <string>

using namespace std;

Tosoba::Tosoba()
{
    cout << "Utworzono obiekt konstruktorem domyslnym klasy Tosoba" << endl;
}

Tosoba::Tosoba(string imie, string nazwisko)
{
    imie=imie;
    nazwisko=nazwisko;
    cout << "Utworzono obiekt konstruktorem z parametrami klasy Tosoba" << endl;
}

Tosoba::~Tosoba()
{
    cout << "Usunieto obiekt destruktorem klasy Tosoba" << endl;
}

void Tosoba::wczytaj()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
}

void Tosoba::wyswietl()
{
    cout << imie << " " << nazwisko << endl;
}

