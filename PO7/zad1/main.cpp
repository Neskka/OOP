#include <iostream>
#include "Tdokument.h"
#include "Tfaktura.h"
#include "Ttowar.h"
#include "Tklient.h"

using namespace std;

int main()
{
    Tfaktura faktura;
    faktura.wczytaj();
    faktura.wyswietl();
    return 0;
}
