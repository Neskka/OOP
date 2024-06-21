#include "Tdata.h"

Tdata::Tdata()
{
    cout << "Konstruktor domyslny klasy Tdata" << endl;
}

Tdata::~Tdata()
{
    cout << "Destruktor klasy Tdata" << endl;
}

void Tdata::wczytaj()
{
    cout << "Podaj dzien: ";
    cin >> this->d;
    cout << "Podaj miesiac: ";
    cin >> this->m;
    cout << "Podaj rok: ";
    cin >> this->r;
}

void Tdata::wyswietl()
{
    cout << this->d << "." << this->m << "." << this->r << endl;
}

int Tdata::getR()
{
    return this->r;
}
