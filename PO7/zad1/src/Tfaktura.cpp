#include "Tfaktura.h"
#include <iostream>
#include <iomanip>

using namespace std;

Tfaktura::Tfaktura()
{
    //ctor
}

Tfaktura::Tfaktura(Tklient *k, int n)
{
    klient = k;
    liczbaPozycji = n;
}

Tfaktura::~Tfaktura()
{
    delete klient;
    delete[] towar;
}

void Tfaktura::wczytaj()
{
    Tdokument::wczytaj();
    klient = new Tklient;
    klient -> wczytaj();
    cout << "Podaj liczbe pozycji: ";
    cin >> liczbaPozycji;
    towar = new Ttowar[liczbaPozycji];
    for (int i = 0; i < liczbaPozycji; i++)
    {
        towar[i].wczytaj();
    }
}

float Tfaktura::suma()
{
    float suma = 0;
    for (int i = 0; i < liczbaPozycji; i++)
    {
        suma = suma + towar[i].oblicz();
    }
    return suma;
}

void Tfaktura::wyswietl()
{
    Tdokument::wyswietl();
    klient -> wyswietl();
    cout << "Lp." << setw(10) << "Nazwa" << setw(10) << "Kod" << setw(10) << "Ilosc" << setw(10) << "Cena" << setw(10) << "Wartosc" << endl;
    for (int i = 0; i < liczbaPozycji; i++)
    {
        cout << i + 1 << ". ";
        towar[i].wyswietl();
    }
    cout << "Suma: " << suma() << " zl" << endl;
}
