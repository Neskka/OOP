#include <iostream>
#include "Tosoba.h"

using namespace std;

int main()
{
    Tosoba osoba; //deklaracja obiektu z jednoczesnym automatycznym wywolaniem kostruktora domyslnego
    osoba.wyswietl();
    {
        cout << "Wewnetrzny blok" << endl;
        Tdata data = {10, 3, 2000};
        Tosoba osoba2("Kowalski", "Jan", data);
        osoba2.wyswietl();
        cout << "Koniec wewnetrznego bloku" << endl;
    }
    //praca na wskazniku
    Tosoba *wsk;
    //wsk = new Tosoba; //utworzenie obiektu konstruktor domyslny
    wsk = new Tosoba("Nowak", "Ewa", {11, 12, 1999});
    wsk -> wyswietl();
    delete wsk;
    osoba.wczytaj();
    osoba.wyswietl();
    osoba.wyswietl(2023);
    osoba.info();
    osoba.info(2023);
    cout << "Koniec maina" << endl;
    return 0;
}
