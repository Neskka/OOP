#include "Tskrzypce.h"
#include <string>
#include <iostream>

using namespace std;

Tskrzypce::Tskrzypce()
{
    nazwa = "skrzypce";
    cout << "Utworzono obiekt klasy Tskrzypce konstruktorem domyslnym" << endl;
}

Tskrzypce::Tskrzypce(string nazwa)
{
    cout << "Utworzono obiekt klasy Tskrzypce konstruktorem z parametrami" << endl;
    nazwa = nazwa;
}

Tskrzypce::~Tskrzypce()
{
    cout << "Usunieto obiekt klasy Tskrzypce destruktorem" << endl;
}

string Tskrzypce::dzwiek()
{
    string dzwiek;
    cout << "Podaj dzwiek: ";
    cin >> dzwiek;
    return dzwiek;
}
