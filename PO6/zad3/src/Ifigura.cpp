#include "Ifigura.h"
#include <iostream>

using namespace std;

Ifigura::Ifigura()
{
    cout << "Utworzono obiekt Ifigura konstruktorem domyslnym" << endl;
    nazwa = "nieznana";
}

Ifigura::Ifigura(string naz)
{
    cout << "Utworzono obiekt Ifigura konstruktorem z parametrami" << endl;
    nazwa = naz;
}

Ifigura::~Ifigura()
{
    cout << "Usunieto obiekt Ifigura destruktorem" << endl;
}

void Ifigura::info()
{
    cout << nazwa << endl;
}

void Ifigura::rysuj()
{
    cout << "Rysuje tu " << nazwa << endl;
}

float Ifigura::pole()
{
    return 0;
}

float Ifigura::obwod()
{
    return 0;
}

void Ifigura::wyswietl()
{
    info();
    rysuj();
    cout << "Pole=" << pole() << endl;
    cout << "Obwod=" << obwod() << endl << endl;
}
