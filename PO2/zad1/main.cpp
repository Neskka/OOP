#include <iostream>
#include "Tdzialania.h"
#include "Tpracownik.h"
#include "Tstudent.h"

using namespace std;

int main()
{
    /*
    Tdzialania dzialania;
    dzialania.podajDane();
    cout << "Suma=" << dzialania.suma() << endl;
    cout << "Roznica=" << dzialania.roznica() << endl;
    cout << "Iloczyn=" << dzialania.iloczyn() << endl;
    cout << "Iloraz=" << dzialania.iloraz() << endl;
    */

    /*
    int liczba;
    cout << "Podaj liczbe pracownikow: ";
    cin >> liczba;
    Tpracownik *pracownik = new Tpracownik[liczba];
    for (int i = 0; i < liczba; i++)
    {
        pracownik[i].wczytaj();
    }
    for (int i = 0; i < liczba; i++)
    {
        pracownik[i].wyswietl();
    }
    delete[] pracownik;
    */

    Tstudent student;
    student.wczytaj();
    student.wyswietl();

    return 0;
}
