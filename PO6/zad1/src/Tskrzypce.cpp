#include "Tskrzypce.h"
#include <iostream>

using namespace std;

Tskrzypce::Tskrzypce()
{
    nazwa = "skrzypce";
}

Tskrzypce::Tskrzypce(string naz)
{
    nazwa = naz;
}

Tskrzypce::~Tskrzypce()
{
    //dtor
}

string Tskrzypce::dzwiek()
{
    string dzwiek;
    cout << "Podaj dzwiek: ";
    cin >> dzwiek;
    return dzwiek;
}
