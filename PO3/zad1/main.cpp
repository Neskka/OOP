#include <iostream>
#include "Tosoba.h"

using namespace std;

int main()
{
    Tosoba osoba;
    Tosoba osoba2("Konrad", "Filipek", {17, 9, 2002});
    //osoba.wczytaj();
    osoba.wyswietl();
    osoba.wyswietl(2023);
    osoba.info();
    osoba.info(2023);
    osoba2.wyswietl();
    osoba2.wyswietl(2023);
    osoba2.info();
    osoba2.info(2023);

    Tosoba *osoba3 = new Tosoba;
    osoba3 -> wczytaj();
    osoba3 -> wyswietl();
    osoba3 -> wyswietl(2023);
    osoba3 -> info();
    osoba3 -> info(2023);
    delete osoba3;
    return 0;
}
