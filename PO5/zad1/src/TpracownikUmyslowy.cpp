#include "TpracownikUmyslowy.h"
#include <iostream>

using namespace std;

TpracownikUmyslowy::TpracownikUmyslowy()
{
    //ctor
}

TpracownikUmyslowy::TpracownikUmyslowy(const string &imie, const string &nazwisko, string firma, float wynagrodzenie, float premia):Tpracownik(imie, nazwisko, firma)
{
    wynagrodzenie = wynagrodzenie;
    premia = premia;
}

TpracownikUmyslowy::~TpracownikUmyslowy()
{
    //dtor
}

void TpracownikUmyslowy::wczytaj()
{
    Tpracownik::wczytaj();
    cout << "Podaj wynagrodzenie: ";
    cin >> wynagrodzenie;
    cout << "Podaj premie: ";
    cin >> premia;
}

float TpracownikUmyslowy::obliczWynagrodzenie()
{
    return wynagrodzenie + (0.01 * premia * wynagrodzenie);
}

void TpracownikUmyslowy::wyswietl()
{
    Tpracownik::wyswietl();
    cout << "Wynagrodzenie: " << obliczWynagrodzenie() << endl;
}
