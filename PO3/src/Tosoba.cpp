#include "Tosoba.h"
#include <iostream>
#include <cstring> //biblioteka c-stringow (lancuchow z C)

using namespace std;

Tosoba::Tosoba()
{
    cout << "Konstruktor domyslny klasy Tosoba" << endl;
    strcpy(nazwisko, "Marzeda");
    imie = "Agnieszka";
    dataUr.d = 22;
    dataUr.m = 6;
    dataUr.r = 2002;
}

Tosoba::Tosoba(const char *naz, const string &im, Tdata dd)
{
    cout << "Konstruktor z parametrami klasy Tosoba" << endl;
    strcpy(nazwisko, naz);
    imie = im;
    dataUr = dd;
}

Tosoba::~Tosoba()
{
    cout << "Destruktor klasy Tosoba" << endl;
}

void Tosoba::wczytaj()
{
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj dzien urodzenia: ";
    cin >> dataUr.d;
    cout << "Podaj miesiac urodzenia: ";
    cin >> dataUr.m;
    cout << "Podaj rok urodzenia: ";
    cin >> dataUr.r;
}

void Tosoba::wyswietl()
{
    cout << imie << " " << nazwisko << " " << dataUr.d << "." << dataUr.m << "." << dataUr.r << endl;
}

void Tosoba::wyswietl(int rok)
{
    int wiek = rok - dataUr.r;
    cout << imie << " " << nazwisko << " " << wiek << " lat" << endl;
}

void Tosoba::info()
{
    int wiek = 2023 - dataUr.r;
    if (wiek < 18)
    {
        cout << "Dziecko" << endl;
    }
    else if (wiek >= 18 && wiek < 30)
    {
        cout << "Osoba pelnoletnia" << endl;
    }
    else if (wiek >=30 && wiek < 50)
    {
        cout << "Osoba 30+" << endl;
    }
    else
    {
        cout << "Osoba 50+" << endl;
    }
}

void Tosoba::info(int rok)
{
    if (dataUr.r + 18 <= rok)
    {
        cout << "18 lat ukonczone w " << dataUr.r + 18 << " roku" << endl;
    }
}
