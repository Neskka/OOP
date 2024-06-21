#include <iostream>
#include "Tsamochod.h"

using namespace std;

int main()
{
    Tsamochod samochod;
    //samochod.zwiekszenieStanuLicznika();
    //samochod.wyswietl();
    Tsamochod samochod2("LLB16505", "Volvo", "S70", 14500, 304567);
    //samochod2.wyswietl();
    //Tsamochod &samochod3 = samochod2;
    //samochod3.wczytaj();
    //samochod3.wyswietl();
    Tsamochod samochod4(samochod2);
    samochod4.wyswietl();
    return 0;
}
