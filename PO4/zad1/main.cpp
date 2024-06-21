#include <iostream>
#include "Tdata.h"
#include "Tosoba2.h"

using namespace std;

int main()
{
    /*
    Tosoba2 osoba;
    osoba.wczytaj();
    Tosoba2 osoba2("Agnieszka", "Marzeda", {22, 6, 2002});
    Tosoba2 partner(osoba2);
    string n = osoba.getNazwiskoImie();
    cout << n << endl;
    int roz = osoba.roznicaWieku(partner);
    cout << roz << endl;
    Tosoba2 osoba3 = osoba.dluzszeNazwisko(partner);
    osoba3.wyswietl();
    */

    const int n = 3;
    Tosoba2 osoba[n];
    for (int i = 0; i < n; i++)
        osoba[i].wczytaj();
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        osoba[i].wyswietl();
    }
    return 0;
}
