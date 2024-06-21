#include <iostream>
#include "TosobaS.h"

using namespace std;

int main()
{
    TosobaS osoba;
    int n = osoba.ile();
    cout << n << endl;
    osoba.podajDane();
    TosobaS osoba1(osoba);
    n = osoba.ile();
    cout << n << endl;
    TosobaS *osoba2 = new TosobaS;
    osoba2 -> podajDane();
    TosobaS osoba3(*osoba2);
    n = osoba.ile();
    cout << n << endl;
    delete osoba2;
    n = osoba.ile();
    cout << n << endl;
    TosobaS &osoba4 = osoba;
    TosobaS osoba5(osoba4);
    n = osoba.ile();
    cout << n << endl;
    /*
    string k = osoba.getKraj();
    cout << k << endl;
    n = osoba.ile();
    cout << n << endl;
    */
    return 0;
}
