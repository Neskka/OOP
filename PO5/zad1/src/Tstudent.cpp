#include "Tstudent.h"
#include <iostream>

using namespace std;

Tstudent::Tstudent()
{
    //ctor
}

Tstudent::Tstudent(const string &imie, const string &nazwisko, string uczelnia, int liczbaOcen):Tosoba(imie, nazwisko)
{
    uczelnia = uczelnia;
    liczbaOcen = liczbaOcen;
}

Tstudent::~Tstudent()
{
    //dtor
}

void Tstudent::wczytaj()
{
    Tosoba::wczytaj();
    cout << "Podaj uczelnie: ";
    cin.ignore();
    getline(cin, uczelnia);
    cout << "Podaj liczbe ocen: ";
    cin >> liczbaOcen;
}

void Tstudent::wczytajOceny()
{
    for (int i = 0; i < liczbaOcen; i++)
    {
        cout << "Podaj ocene: ";
        cin >> oceny[i];
    }
}

float Tstudent::srednia()
{
    int licznik = 0;
    for (int i = 0; i < liczbaOcen; i++)
    {
        licznik = licznik + oceny[i];
    }
    return licznik/liczbaOcen;
}

void Tstudent::wyswietl()
{
    Tosoba::wyswietl();
    cout << uczelnia << endl << "Srednia: " << srednia() << endl;
}
