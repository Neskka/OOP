#include <iostream>
#include "Tosoba.h"
#include "Tstudent.h"
#include "Tpracownik.h"
#include "TpracownikFizyczny.h"
#include "TpracownikUmyslowy.h"

using namespace std;

int main()
{
    Tosoba osoba;
    /*
    Tstudent student;
    student.wczytaj();
    student.wczytajOceny();
    student.wyswietl();
    */
    /*
    Tpracownik pracownik;
    pracownik.wczytaj();
    pracownik.wyswietl();
    */
    TpracownikFizyczny pracownikFizyczny;
    pracownikFizyczny.wczytaj();
    pracownikFizyczny.wyswietl();

    TpracownikUmyslowy pracownikUmyslowy;
    pracownikUmyslowy.wczytaj();
    pracownikUmyslowy.wyswietl();
    return 0;
}
