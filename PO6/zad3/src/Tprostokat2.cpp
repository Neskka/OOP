#include "Tprostokat2.h"
#include <iostream>

using namespace std;

Tprostokat2::Tprostokat2()
{
    cout << "Utworzono obiekt Tprostokat2 konstruktorem domyslnym" << endl;
    nazwa = "prostokat";
}

Tprostokat2::Tprostokat2(string naz)
{
    cout << "Utworzono obiekt Tprpstokat2 konstruktorem z parametrami" << endl;
    nazwa = naz;
}

Tprostokat2::~Tprostokat2()
{
    cout << "Usunieto obiekt Tprostokat2 destruktorem" << endl;
}

void Tprostokat2::info()
{
    cout << nazwa << endl;
}

void Tprostokat2::rysuj()
{
    cout << "Rysuje tu " << nazwa << endl;
}

void Tprostokat2::wczytajDane()
{
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
}

float Tprostokat2::pole()
{
    return a * b;
}

float Tprostokat2::obwod()
{
    return (2 * a) + (2 * b);
}
