#include "Tosoba2.h"
#include <iostream>
#include "Tdata.h"

using namespace std;

Tosoba2::Tosoba2()
{
    //ctor
}

Tosoba2::~Tosoba2()
{
    //dtor
}

void Tosoba2::wczytaj()
{
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj motto: ";
    cin.ignore();
    getline(cin, motto);
    dataUr.wczytaj();
}

void Tosoba2::wyswietl()
{
    cout << nazwisko << " " << imie << " " << '"' << motto << '"' << " ";
    dataUr.wyswietl();
}

string Tosoba2::GetNazwiskoImie()
{
    string nazwiskoImie = nazwisko + " " + imie;
    return nazwiskoImie;
}

int Tosoba2::roznicaWieku(Tosoba2 & partner)
{
    int roznica = abs(Tosoba2.dataUr.r - partner.dataUr.r);
    return roznica;
}

Tosoba2 Tosoba2::dluzszeNazwisko(Tosoba2 & partner)
{
    //wykorzystac wskaznik i *
}
