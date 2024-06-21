#include "Tstudent.h"
#include <iostream>

using namespace std;

Tstudent::Tstudent()
{
    //ctor
}

Tstudent::~Tstudent()
{
    //dtor
}

void Tstudent::wczytaj()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    for (int i = 0; i < 3; i++)
    {
        float ocena;
        cout << "Podaj ocene: ";
        cin >> ocena;
        if (ocena >= 2 && ocena <= 5)
        {
            oceny[i] = ocena;
        }
        else
        {
            i--;
        }
    }
}

float Tstudent::srednia()
{
    return (oceny[0] + oceny[1] + oceny[2])/3;
}

void Tstudent::wyswietl()
{
    cout << imie << " " << nazwisko << " ma srednia " << srednia() << endl;
}
