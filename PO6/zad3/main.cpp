#include <iostream>
#include "Ifigura.h"
#include "Tkolo2.h"
#include "Tprostokat2.h"
#include "Tkwadrat2.h"

using namespace std;

int main()
{
    Ifigura figura;
    figura.wyswietl();

    Tkolo2 *kolo = new Tkolo2;
    kolo -> wczytajDane();
    kolo -> wyswietl();

    Tprostokat2 *prostokat = new Tprostokat2;
    prostokat -> wczytajDane();
    prostokat -> wyswietl();

    Tkwadrat2 *kwadrat = new Tkwadrat2;
    kwadrat -> wczytajDane();
    kwadrat -> wyswietl();

    delete kolo;
    delete prostokat;
    delete kwadrat;

    return 0;
}
