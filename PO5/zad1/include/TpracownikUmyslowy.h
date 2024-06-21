#ifndef TPRACOWNIKUMYSLOWY_H
#define TPRACOWNIKUMYSLOWY_H
#include <string>
#include <Tpracownik.h>

using namespace std;

class TpracownikUmyslowy : public Tpracownik
{
    public:
        TpracownikUmyslowy();
        TpracownikUmyslowy(const string &imie, const string &nazwisko, string firma, float wynagrodzenie, float premia);
        virtual ~TpracownikUmyslowy();
        void wczytaj();
        float obliczWynagrodzenie();
        void wyswietl();

    protected:
        float wynagrodzenie, premia;

    private:
};

#endif // TPRACOWNIKUMYSLOWY_H
