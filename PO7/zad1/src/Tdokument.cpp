#include "Tdokument.h"
#include <iostream>

using namespace std;

Tdokument::Tdokument()
{
    //ctor
}

Tdokument::~Tdokument()
{
    //dtor
}

void Tdokument::wczytaj()
{
    cout << "Podaj nr dokumentu: ";
    cin >> nr;
    cout << "Podaj nazwe dokumentu: ";
    cin >> nazwa;
    cout << "Podaj dzien: ";
    cin >> data.d;
    cout << "Podaj miesiac: ";
    cin >> data.m;
    cout << "Podaj rok: ";
    cin >> data.r;
}

void Tdokument::wyswietl()
{
    cout << nazwa << " Nr " << nr << " Data: " << data.d << "." << data.m << "." << data.r << endl;
}
