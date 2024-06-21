#include "Tklient.h"
#include <iostream>

using namespace std;

Tklient::Tklient()
{
    //ctor
}

Tklient::~Tklient()
{
    //dtor
}

void Tklient::wczytaj()
{
    cout << "Podaj NIP: ";
    cin >> NIP;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
}

void Tklient::wyswietl()
{
    cout << "Klient: " << imie << " " << nazwisko << " NIP: " << NIP << endl;
}
