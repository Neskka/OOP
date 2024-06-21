#include <iostream>
#include <string>
#include "Tdomownik.h"

using namespace std;

int main()
{
    Tdomownik ojciec("Jan Kowalski", "Tajne informacje ojca");
    Tdomownik matka("Anna Kowalska", "Tajne informacje matki");
    Tdomownik corka("Kasia Kowalska", "Tajne informacje corki");
    Tsasiad sasiad1("Marek Nowak");

    cout << "Informacje ojca:" << endl;
    sasiad(ojciec);
    ojciec.wyswietl();
    cout << endl;

    cout << "Informacje matki:" << endl;
    sasiad(matka);
    matka.wyswietl();
    cout << endl;

    cout << "Informacje corki:" << endl;
    sasiad(corka);
    corka.wyswietl();
    cout << endl;

    cout << "Informacje sasiada:" << endl;
    sasiad1.info(ojciec);
    sasiad1.info(matka);
    sasiad1.info(corka);

    return 0;
}
