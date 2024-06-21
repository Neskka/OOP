#include "Ttrabka.h"
#include <iostream>

using namespace std;

Ttrabka::Ttrabka()
{
    nazwa = "trabka";
}

Ttrabka::Ttrabka(string naz)
{
    nazwa = naz;
}

Ttrabka::~Ttrabka()
{
    //dtor
}

string Ttrabka::dzwiek()
{
    string dzwiek;
    cout << "Podaj dzwiek: ";
    cin >> dzwiek;
    return dzwiek;
}
