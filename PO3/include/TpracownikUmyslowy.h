#ifndef TPRACOWNIKUMYSLOWY_H
#define TPRACOWNIKUMYSLOWY_H
#include <string>
#include <Tpracownik.h>

using namespace std;

class TpracownikUmyslowy : public Tpracownik
{
    public:
        TpracownikUmyslowy();
        TpracownikUmyslowy(string imie, string nazwisko, string firma, float wynagrodzenie, float premia);
        ~TpracownikUmyslowy();
        void wczytaj();
        float placa();
        void wyswietl();

    protected:
        float wynagrodzenie, premia;

    private:
};

#endif // TPRACOWNIKUMYSLOWY_H
