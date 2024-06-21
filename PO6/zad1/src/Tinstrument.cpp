#include "Tinstrument.h"
#include <iostream>

using namespace std;

Tinstrument::Tinstrument()
{
    nazwa = "nieznany";
}

Tinstrument::Tinstrument(string naz)
{
    nazwa = naz;
}

Tinstrument::~Tinstrument()
{
    //dtor
}

string Tinstrument::dzwiek()
{
    string dzwiek;
    cout << "Podaj dzwiek: ";
    cin >> dzwiek;
    return dzwiek;
}

void Tinstrument::muzyka(int n)
{
    string dzw = dzwiek();
    cout << "Gra instrument " << nazwa << endl;
    for (int i = 0; i < n; i++)
    {
        cout << dzw << " ";
    }
    cout << endl;
}
