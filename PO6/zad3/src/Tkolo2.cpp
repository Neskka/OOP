#include "Tkolo2.h"
#include <iostream>
#include <math.h>

using namespace std;

Tkolo2::Tkolo2()
{
    cout << "Utworzono obiekt Tkolo2 konstruktorem domyslnym" << endl;
    nazwa = "kolo";
}

Tkolo2::Tkolo2(string naz)
{
    cout << "Utworzono obiekt Tkolo2 konstruktorem z parametrami" << endl;
    nazwa = naz;
}

Tkolo2::~Tkolo2()
{
    cout << "Usunieto obiekt Tkolo2 destruktorem" << endl;
}

void Tkolo2::info()
{
    cout << nazwa << endl;
}

void Tkolo2::rysuj()
{
    cout << "Rysuje tu " << nazwa << endl;
}

void Tkolo2::wczytajDane()
{
    cout << "Podaj r: ";
    cin >> r;
}

float Tkolo2::pole()
{
    return M_PI * pow(r, 2);
}

float Tkolo2::obwod()
{
    return 2 * M_PI * r;
}
