#include "Tpracownik.h"
#include <iostream>

using namespace std;

Tpracownik::Tpracownik()
{
    //ctor
}

Tpracownik::~Tpracownik()
{
    //dtor
}

void Tpracownik::wczytaj()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj stawke za godzine: ";
    cin >> stawka;
    cout << "Podaj liczbe godzin: ";
    cin >> liczbaGodzin;
    cout << "Podaj dzien zatrudnienia: ";
    cin >> data.d;
    cout << "Podaj miesiac zatrudnienia: ";
    cin >> data.m;
    cout << "Podaj rok zatrudnienia: ";
    cin >> data.r;
}

float Tpracownik::placa()
{
    return stawka * liczbaGodzin;
}

void Tpracownik::wyswietl()
{
    cout << imie << " " << nazwisko << " zatrudniony/a " << data.d << "." << data.m << "." << data.r << " otrzyma " << placa() << " zl" << endl;
}
