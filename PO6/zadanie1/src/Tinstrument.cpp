#include "Tinstrument.h"
#include <iostream>
#include <string>

using namespace std;

Tinstrument::Tinstrument()
{
    nazwa = "nieznany";
    cout << "Utworzono obiekt klasy Tinstrument konstruktorem domyslnym" << endl;
}

Tinstrument::Tinstrument(string nazwa)
{
    cout << "Utworzono obiekt klasy Tinstrument konstruktorem z parametrami" << endl;
    nazwa = nazwa;
}

Tinstrument::~Tinstrument()
{
    cout << "Usunieto obiekt klasy Tinstrument destruktorem" << endl;
}

string Tinstrument::dzwiek()
{
    string dzwiek;
    cout << "Podaj dzwiek: ";
    cin >> dzwiek;
    return dzwiek;
}

void Tinstrument::muzyka(int n)
{
    string dzw = dzwiek();
    cout << "Gra instrument " << nazwa << endl;
    for (int i = 0; i < n; i++)
    {
        cout << dzw << " ";
    }
    cout << endl;
}
