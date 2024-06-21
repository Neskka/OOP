#include "Tosoba.h"
#include <iostream>

using namespace std;

Tosoba::Tosoba()
{
    cout << "Utworzono obiekt konstruktorem domyslnym" << endl;
}

Tosoba::Tosoba(const string &im, const string &naz)
{
    imie = im;
    nazwisko = naz;
    cout << "Utworzono obiekt konstruktorem z parametrami" << endl;
}

Tosoba::~Tosoba()
{
    cout << "Usunieto obiekt destruktorem" << endl;
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
