#include "Tstudent.h"
#include <iostream>
#include <string>

using namespace std;

Tstudent::Tstudent()
{
    cout << "Utworzono obiekt konstruktorem domyslnym klasy Tstudent" << endl;
}

Tstudent::~Tstudent()
{
    cout << "Usunieto obiekt destruktorem klasy Tstudent" << endl;
}

void Tstudent::wczytaj()
{
    Tosoba::wczytaj();
    cout << "Podaj uczelnie: ";
    cin.ignore();
    getline(cin, uczelnia);
    cout << "Podaj liczbe ocen: ";
    cin >> liczbaOcen;
}

void Tstudent::wczytajOceny()
{
    oceny = new float[liczbaOcen];
    float ocena;
    for (int i = 0; i < liczbaOcen; i++)
    {
        cout << "Podaj ocene: ";
        cin >> ocena;
        if (ocena >= 2 && ocena <= 5)
        {
            oceny[i] = ocena;
        }
        else
        {
            while (ocena < 2 || ocena > 5)
            {
                cout << "Podaj ocene: ";
                cin >> ocena;
                if (ocena >= 2 && ocena <= 5)
                {
                    oceny[i] = ocena;
                }
            }
        }
    }
}

float Tstudent::srednia()
{
    float suma = 0;
    for (int i = 0; i < liczbaOcen; i++)
    {
        suma = suma + oceny[i];
    }
    float srednia = suma/liczbaOcen;
    return srednia;
}

bool Tstudent::czyZaliczyl()
{
    int licznik = 0;
    for (int i = 0; i < liczbaOcen; i++)
    {
        if (oceny[i] >= 3)
        {
            licznik++;
        }
    }
    if (licznik == liczbaOcen)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Tstudent::wyswietl()
{
    //cout << nazwisko << " " << imie;
    Tosoba::wyswietl();
    cout << uczelnia << endl;
    cout << "Oceny: ";
    for (int i = 0; i < liczbaOcen; i++)
    {
        cout << oceny[i] << " ";
    }
    cout << endl << "Srednia: " << srednia() << endl;
    cout << "Czy zaliczyl: " << czyZaliczyl() << endl;
}

Tstudent::Tstudent(string imie, string nazwisko, string uczelnia, int liczbaOcen):Tosoba(imie, nazwisko)
{
    //this -> imie = imie;
    //nazwisko = nazwisko;  //niepotrzebne jezeli dolozymy parametry z przodka
    uczelnia = uczelnia;
    liczbaOcen = liczbaOcen;
    oceny = new float[liczbaOcen];
    wczytajOceny();
}
