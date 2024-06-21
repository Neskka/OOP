#include "Ttrabka.h"
#include <string>
#include <iostream>

using namespace std;

Ttrabka::Ttrabka()
{
    nazwa = "trabka";
    cout << "Utworzono obiekt klasy Ttrabka konstruktorem domyslnym" << endl;
}

Ttrabka::Ttrabka(string nazwa)
{
    cout << "Utworzono obiekt klasy Ttrabka konstruktorem z parametrami" << endl;
    nazwa = nazwa;
}

Ttrabka::~Ttrabka()
{
    cout << "Usunieto obiekt klasy Ttrabka destruktorem" << endl;
}

string Ttrabka::dzwiek()
{
    string dzwiek;
    cout << "Podaj dzwiek: ";
    cin >> dzwiek;
    return dzwiek;
}
