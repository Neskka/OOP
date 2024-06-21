#include "TosobaS.h"
#include <iostream>

using namespace std;

int TosobaS::liczbaObiektow = 0;
string TosobaS::kraj = "Polska";

TosobaS::TosobaS()
{
    cout << "Utworzono obiekt konstruktorem domyslnym" << endl;
}

TosobaS::TosobaS(const string &naz, const string &im, int wiek)
{
    nazwisko = naz;
    imie = im;
    cout << "Utworzono obiekt konstruktorem z parametrami" << endl;
}

TosobaS::TosobaS(const TosobaS & osoba)
{
    nazwisko = osoba.nazwisko;
    imie = osoba.imie;
    wiek = osoba.wiek;
    liczbaObiektow++;
}

TosobaS::~TosobaS()
{
    cout << "Usunieto obiekt" << endl;
    liczbaObiektow--;
}

void TosobaS::podajDane()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj wiek: ";
    cin >> wiek;
}

void TosobaS::wyswietl()
{
    cout << imie << " " << nazwisko << " " << wiek << " lat " << kraj << endl;
}

string TosobaS::getKraj()
{
    return kraj;
}

int TosobaS::ile()
{
    return liczbaObiektow;
}
