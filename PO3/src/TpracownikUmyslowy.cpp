#include "TpracownikUmyslowy.h"
#include <iostream>
#include <string>

using namespace std;

TpracownikUmyslowy::TpracownikUmyslowy()
{
    cout << "Utworzono obiekt konstruktorem domyslnym klasy TpracownikUmyslowy" << endl;
}

TpracownikUmyslowy::TpracownikUmyslowy(string imie, string nazwisko, string firma, float wynagrodzenie, float premia):Tpracownik(imie, nazwisko, firma)
{
    wynagrodzenie = wynagrodzenie;
    premia = premia;
}

TpracownikUmyslowy::~TpracownikUmyslowy()
{
    cout << "Usunieto obiekt destruktorem klasy TpracownikUmyslowy" << endl;
}

void TpracownikUmyslowy::wczytaj()
{
    Tpracownik::wczytaj();
    cout << "Podaj wynagrodzenie: ";
    cin >> wynagrodzenie;
    cout << "Podaj premie (w procentach): ";
    cin >> premia;
}

float TpracownikUmyslowy::placa()
{
    float placa = 0.01 * premia * wynagrodzenie + wynagrodzenie;
    return placa;
}

void TpracownikUmyslowy::wyswietl()
{
    Tpracownik::wyswietl();
    cout << "Placa: " << placa() << endl;
}
