#include "Tdzialania.h"
#include <iostream>
#include <math.h>

using namespace std;

Tdzialania::Tdzialania()
{
    cout << "Utworzono obiekt klasy Tdzialania konstruktorem domyslnym" << endl;
}

Tdzialania::~Tdzialania()
{
    cout << "Usunieto obiekt klasy Tdzialania destruktorem" << endl;
}

void Tdzialania::podajDane()
{
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
}

int Tdzialania::suma()
{
    return a + b;
}

int Tdzialania::roznica()
{
    return a - b;
}

int Tdzialania::iloczyn()
{
    return a * b;
}

float Tdzialania::iloraz()
{
    if (b != 0)
    {
        return 1.0 * a/b;
    }
}
