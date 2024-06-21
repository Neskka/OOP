#include "Ttowar.h"
#include <iostream>
#include <iomanip>

using namespace std;

Ttowar::Ttowar()
{
    //ctor
}

Ttowar::~Ttowar()
{
    //dtor
}

void Ttowar::wczytaj()
{
    cout << "Podaj kod towaru: ";
    cin >> kod;
    cout << "Podaj nazwe towaru: ";
    cin >> nazwa;
    cout << "Podaj ilosc: ";
    cin >> ilosc;
    cout << "Podaj cene: ";
    cin >> cena;
}

float Ttowar::oblicz()
{
    return cena * ilosc;
}

void Ttowar::wyswietl()
{
    cout << setw(10) << nazwa << setw(10) << kod << setw(10) << ilosc << setw(10) << cena << setw(10) << oblicz() << endl;
}
