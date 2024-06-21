#include "Tdata.h"
#include <iostream>

using namespace std;

Tdata::Tdata()
{
    //ctor
}

Tdata::~Tdata()
{
    //dtor
}

void Tdata::wczytaj()
{
    cout << "Podaj dzien: ";
    cin >> d;
    cout << "Podaj miesiac: ";
    cin >> m;
    cout << "Podaj rok: ";
    cin >> r;
}

void Tdata::wyswietl()
{
    cout << d << "." << m << "." << r << endl;
}

int Tdata::getR()
{
    return r;
}
