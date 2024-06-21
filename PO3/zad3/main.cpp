#include <iostream>
#include "Ttrojkat.h"

using namespace std;

int main()
{
    Ttrojkat trojkat;
    trojkat.wczytaj();
    Ttrojkat trojkat2(2, 3, 4);
    trojkat.pole();
    trojkat.pole(4);
    trojkat2.pole();
    trojkat2.pole(3);
    return 0;
}
