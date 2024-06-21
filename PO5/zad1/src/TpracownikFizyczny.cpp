#include "TpracownikFizyczny.h"
#include <iostream>

using namespace std;

TpracownikFizyczny::TpracownikFizyczny()
{
    //ctor
}

TpracownikFizyczny::TpracownikFizyczny(const string &imie, const string &nazwisko, string firma, float wynagrodzenie, float premia):Tpracownik(imie, nazwisko, firma)
{
    wynagrodzenie = wynagrodzenie;
    premia = premia;
}

TpracownikFizyczny::~TpracownikFizyczny()
{
    //dtor
}

void TpracownikFizyczny::wczytaj()
{
    Tpracownik::wczytaj();
    cout << "Podaj wynagrodzenie: ";
    cin >> wynagrodzenie;
    cout << "Podaj premie: ";
    cin >> premia;
}

float TpracownikFizyczny::obliczWynagrodzenie()
{
    return wynagrodzenie + (0.01 * premia * wynagrodzenie);
}

void TpracownikFizyczny::wyswietl()
{
    Tpracownik::wyswietl();
    cout << "Wynagrodzenie: " << obliczWynagrodzenie() << endl;
}
