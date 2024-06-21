#include "Tosoba2.h"
#include <iostream>
#include "Tdata.h"
#include <math.h>
#include <string>

using namespace std;

Tosoba2::Tosoba2()
{
    //ctor
}

Tosoba2::Tosoba2(const string &im, const string &naz, Tdata data)
{
    imie = im;
    nazwisko = naz;
    dataUr = data;
    motto = "Kochaj swoja polibude";
}

Tosoba2::~Tosoba2()
{
    //dtor
}

void Tosoba2::wczytaj()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj motto: ";
    cin.ignore();
    getline(cin, motto);
    dataUr.wczytaj();
}

void Tosoba2::wyswietl()
{
    cout << imie << " " << nazwisko << endl << motto << endl;
    dataUr.wyswietl();
}

string Tosoba2::getNazwiskoImie()
{
    string nazwiskoImie = nazwisko + " " + imie;
    return nazwiskoImie;
}

int Tosoba2::roznicaWieku(Tosoba2 & partner)
{
    return abs(dataUr.getR() - partner.dataUr.getR());
}

string Tosoba2::getNazwisko()
{
    return nazwisko;
}

Tosoba2 Tosoba2::dluzszeNazwisko(Tosoba2 & partner)
{
    if (getNazwisko().size() > partner.getNazwisko().size())
    {
        return Tosoba2();
    }
    else
    {
        return partner;
    }
}
