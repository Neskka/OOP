#include <iostream>
#include <string>
#include "Tinstrument.h"
#include "Ttrabka.h"
#include "Tskrzypce.h"

using namespace std;

int main()
{
    Tinstrument instrument;
    instrument.muzyka(3);
    Ttrabka trabka;
    trabka.muzyka(3);
    Tskrzypce skrzypce;
    skrzypce.muzyka(3);
    return 0;
}
