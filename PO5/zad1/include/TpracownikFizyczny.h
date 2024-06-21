#ifndef TPRACOWNIKFIZYCZNY_H
#define TPRACOWNIKFIZYCZNY_H
#include <string>
#include <Tpracownik.h>

using namespace std;

class TpracownikFizyczny : public Tpracownik
{
    public:
        TpracownikFizyczny();
        TpracownikFizyczny(const string &imie, const string &nazwisko, string firma, float wynagrodzenie, float premia);
        virtual ~TpracownikFizyczny();
        void wczytaj();
        float obliczWynagrodzenie();
        void wyswietl();

    protected:
        float wynagrodzenie, premia;

    private:
};

#endif // TPRACOWNIKFIZYCZNY_H
