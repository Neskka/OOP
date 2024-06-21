#include "Tkolo.h"
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

Tkolo::Tkolo()
{
    nazwa = "kolo";
    cout << "Utworzono obiekt klasy Tkolo konstruktorem domyslnym" << endl;
}

Tkolo::Tkolo(string nazwa)
{
    nazwa = nazwa;
    cout << "Utworzono obiekt klasy Tkolo konstruktorem z parametrami" << endl;
}

Tkolo::~Tkolo()
{
    cout << "Usunieto obiekt klasy Tkolo destruktorem" << endl;
}

float Tkolo::podajR()
{
    float r;
    cout << "Podaj r: ";
    cin >> r;
    return r;
}

float Tkolo::pole()
{
    float r = podajR();
    float pole = M_PI * pow(r, 2);
    return pole;
}

float Tkolo::obwod()
{
    float r = podajR();
    float obwod = 2 * M_PI * r;
    return obwod;
}
