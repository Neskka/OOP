#include <iostream>
#include "Tinstrument.h"
#include "Ttrabka.h"
#include "Tskrzypce.h"

using namespace std;

int main()
{
    Tinstrument instrument;
    instrument.muzyka(3);

    Ttrabka trabka;
    trabka.muzyka(4);

    Tskrzypce skrzypce;
    skrzypce.muzyka(5);
    return 0;
}
