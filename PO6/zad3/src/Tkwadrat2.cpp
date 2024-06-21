#include "Tkwadrat2.h"
#include <iostream>
#include <math.h>

using namespace std;

Tkwadrat2::Tkwadrat2()
{
    cout << "Utworzono obiekt Tkwadrat2 konstruktorem domyslnym" << endl;
    nazwa = "kwadrat";
}

Tkwadrat2::Tkwadrat2(string naz)
{
    cout << "Utworzono obiekt Tkwadrat2 konstruktorem z parametrami" << endl;
    nazwa = naz;
}

Tkwadrat2::~Tkwadrat2()
{
    cout << "Usunieto obiekt Tkwadrat2 destruktorem" << endl;
}

void Tkwadrat2::info()
{
    cout << nazwa << endl;
}

void Tkwadrat2::rysuj()
{
    cout << "Rysuje tu " << nazwa << endl;
}

void Tkwadrat2::wczytajDane()
{
    cout << "Podaj a: ";
    cin >> a;
}

float Tkwadrat2::pole()
{
    return pow(a, 2);
}

float Tkwadrat2::obwod()
{
    return 4 * a;
}
