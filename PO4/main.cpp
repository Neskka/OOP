#include <iostream>
#include "Tdata.h"
#include "Tosoba2.h"

using namespace std;

int main()
{
    Tdata data;
    Tosoba2 osoba2;
    osoba2.wczytaj();
    osoba2.wyswietl();
    string nazwiskoImie = osoba2.GetNazwiskoImie();
    cout << nazwiskoImie << endl;
    Tosoba2 partner;
    partner.wczytaj();
    int roznica = osoba2.roznicaWieku(partner);
    cout << "Roznica wieku = " << roznica << endl;
    return 0;
}
