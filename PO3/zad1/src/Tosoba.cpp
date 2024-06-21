#include "Tosoba.h"
#include <iostream>
#include <string>

using namespace std;

Tosoba::Tosoba()
{
    imie = "Jan";
    nazwisko = "Kowalski";
    data = {1, 1, 2000};
}

Tosoba::Tosoba(const string &im, const string &naz, Tdata dd)
{
    imie = im;
    nazwisko = naz;
    data = dd;
}

Tosoba::~Tosoba()
{
    //dtor
}

void Tosoba::wczytaj()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj dzien urodzenia: ";
    cin >> data.d;
    cout << "Podaj miesiac urodzenia: ";
    cin >> data.m;
    cout << "Podaj rok urodzenia: ";
    cin >> data.r;
}

void Tosoba::wyswietl()
{
    cout << imie << " " << nazwisko << " " << data.d << "." << data.m << "." << data.r << endl;
}

void Tosoba::wyswietl(int rok)
{
    cout << imie << " " << nazwisko << " " << rok - data.r << " lat" << endl;
}

void Tosoba::info()
{
    if (2023 - data.r < 18)
    {
        cout << "Dziecko" << endl;
    }
    if (2023 - data.r >= 18 && 2023 - data.r < 30)
    {
        cout << "Osoba pelnoletnia" << endl;
    }
    if (2023 - data.r >= 30 && 2023 - data.r < 50)
    {
        cout << "Osoba 30+" << endl;
    }
    if (2023 - data.r >= 50)
    {
        cout << "Osoba 50+" << endl;
    }
}

void Tosoba::info(int rok)
{
    cout << imie << " " << nazwisko << " ukonczyl/a 18 lat w " << data.r + 18 << " roku" << endl;
}
