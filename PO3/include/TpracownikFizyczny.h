#ifndef TPRACOWNIKFIZYCZNY_H
#define TPRACOWNIKFIZYCZNY_H
#include <string>
#include <Tpracownik.h>

using namespace std;

class TpracownikFizyczny : public Tpracownik
{
    public:
        TpracownikFizyczny();
        TpracownikFizyczny(string imie, string nazwisko, string firma, float wynagrodzenie, float premia);
        ~TpracownikFizyczny();
        void wczytaj();
        float placa();
        void wyswietl();

    protected:
        float wynagrodzenie, premia;

    private:
};

#endif // TPRACOWNIKFIZYCZNY_H
