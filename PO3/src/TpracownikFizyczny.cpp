#include "TpracownikFizyczny.h"
#include <iostream>
#include <string>

using namespace std;

TpracownikFizyczny::TpracownikFizyczny()
{
    cout << "Utworzono obiekt konstruktorem domyslnym klasy TpracownikFizyczny" << endl;
}

TpracownikFizyczny::TpracownikFizyczny(string imie, string nazwisko, string firma, float wynagrodzenie, float premia):Tpracownik(imie, nazwisko, firma)
{
    wynagrodzenie = wynagrodzenie;
    premia = premia;
}

TpracownikFizyczny::~TpracownikFizyczny()
{
    cout << "Usunieto obiekt destruktorem klasy TpracownikFizyczny" << endl;
}

void TpracownikFizyczny::wczytaj()
{
    Tpracownik::wczytaj();
    cout << "Podaj wynagrodzenie: ";
    cin >> wynagrodzenie;
    cout << "Podaj premie (w procentach): ";
    cin >> premia;
}

float TpracownikFizyczny::placa()
{
    float placa = 0.01 * premia * wynagrodzenie + wynagrodzenie;
    return placa;
}

void TpracownikFizyczny::wyswietl()
{
    Tpracownik::wyswietl();
    cout << "Placa: " << placa() << endl;
}
