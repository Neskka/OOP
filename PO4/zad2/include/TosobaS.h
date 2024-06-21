#ifndef TOSOBAS_H
#define TOSOBAS_H
#include <string>

using namespace std;

class TosobaS
{
    public:
        TosobaS();
        TosobaS(const string &naz, const string &im, int wiek);
        TosobaS(const TosobaS & osoba);
        virtual ~TosobaS();
        void podajDane();
        void wyswietl();
        static int ile();
        static string getKraj();

    protected:
        string nazwisko, imie;
        int wiek;

    private:
        static int liczbaObiektow;
        static string kraj;
};

#endif // TOSOBAS_H
