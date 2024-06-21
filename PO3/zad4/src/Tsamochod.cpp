#include "Tsamochod.h"
#include <iostream>

using namespace std;

Tsamochod::Tsamochod()
{
    nr = "LLB71354";
    marka = "Honda";
    model = "Jazz";
    cena = 8999;
    stanLicznika = 152897;
}

Tsamochod::Tsamochod(const string &numer, const string &mar, const string &mod, const float c, const float stan)
{
    nr = numer;
    marka = mar;
    model = mod;
    cena = c;
    stanLicznika = stan;
}

Tsamochod::Tsamochod(Tsamochod & samochod2)
{
    nr = samochod2.nr;
    marka = samochod2.marka;
    model = samochod2.model;
    cena = samochod2.cena;
    stanLicznika = samochod2.stanLicznika;
}

Tsamochod::~Tsamochod()
{
    //dtor
}

void Tsamochod::wczytaj()
{
    cout << "Podaj nr rejestracyjny: ";
    cin >> nr;
    cout << "Podaj marke: ";
    cin >> marka;
    cout << "Podaj model: ";
    cin >> model;
    cout << "Podaj cene: ";
    cin >> cena;
    cout << "Podaj stan licznika: ";
    cin >> stanLicznika;
}

void Tsamochod::zwiekszenieStanuLicznika()
{
    cout << "Poczatkowy stan licznika: " << stanLicznika << endl;
    float kilometry;
    cout << "Ile kilometrow przejechales? ";
    cin >> kilometry;
    stanLicznika = stanLicznika + kilometry;
}

void Tsamochod::wyswietl()
{
    cout << marka << " " << model << endl << nr << endl << "Cena: " << cena << endl << "Stan licznika: " << stanLicznika << endl;
}
