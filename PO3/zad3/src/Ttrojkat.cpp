#include "Ttrojkat.h"
#include <iostream>
#include <math.h>

using namespace std;

Ttrojkat::Ttrojkat()
{
    a = 3;
    b = 4;
    c = 5;
}

Ttrojkat::Ttrojkat(float a, float b, float c)
{
    this -> a = a;
    this -> b= b;
    this -> c = c;
}

Ttrojkat::~Ttrojkat()
{
    //dtor
}

void Ttrojkat::wczytaj()
{
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
}

void Ttrojkat::pole()
{
    float p = (a + b + c)/2;
    float pole = sqrt(p * (p - a) * (p - b) * (p - c));
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        cout << "Pole=" << pole << endl;
    }
    else
    {
        cout << "Nie da sie zbudowac trojkata" << endl;
    }
}

void Ttrojkat::pole(float h)
{
    float pole = (a * h)/2;
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        cout << "Pole=" << pole << endl;
    }
}
