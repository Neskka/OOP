#include "Tfigura.h"
#include <iostream>
#include <string>

using namespace std;

Tfigura::Tfigura()
{
    nazwa = "figura";
    cout << "Utworzono obiekt klasy Tfigura konstruktorem domyslnym" << endl;
}

Tfigura::Tfigura(string nazwa)
{
    nazwa = nazwa;
    cout << "Utworzono obiekt klasy Tfigura konstruktorem z parametrami" << endl;
}

Tfigura::~Tfigura()
{
    cout << "Usunieto obiekt klasy Tfigura destruktorem" << endl;
}

void Tfigura::info()
{
    cout << nazwa << endl;
}

void Tfigura::rysuj()
{
    cout << "Rysuje " << nazwa << endl;
}

float Tfigura::pole()
{
    return 0;
}

float Tfigura::obwod()
{
    return 0;
}

void Tfigura::wyswietl()
{
    float p = pole();
    float obw = obwod();
    info();
    rysuj();
    cout << "Pole=" << p << endl;
    cout << "Obwod=" << obw << endl;
}
