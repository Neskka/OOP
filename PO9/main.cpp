#include <iostream>
#include "Ttime.h"

using namespace std;

int main()
{
    Ttime lot1(8, 30);
    Ttime lot2(2, 15);
    Ttime oczekiwanie(1, 0);

    Ttime calkowityCzas = lot1 + lot2 + oczekiwanie;
    cout << "Calkowity czas podrozy: " << calkowityCzas << endl;

    Ttime czasPrzelotu = lot2 * 2;
    Ttime czasPodrozyLondynWarszawa = czasPrzelotu * 2;

    bool czyRowne = (czasPrzelotu == czasPodrozyLondynWarszawa);
    cout << "Czas przelotu Paryz - Warszawa dwukrotnie: " << czasPrzelotu << endl;
    cout << "Czas podrozy Londyn - Warszawa (w ta i z powrotem): " << czasPodrozyLondynWarszawa << endl;
    cout << "Czy czas przelotu jest rowny czasowi podrozy Londyn - Warszawa? " << (czyRowne ? "Tak" : "Nie") << endl;

    return 0;
}
