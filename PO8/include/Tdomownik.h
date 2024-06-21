#ifndef TDOMOWNIK_H
#define TDOMOWNIK_H
#include <string>

using namespace std;

class Tsasiad;

class Tdomownik
{
    public:
        Tdomownik(const string& nazwa, const string& sekret, int kod=1234);
        virtual ~Tdomownik();
        static void setkod(int nowyKod);
        static int getkod();
        void wyswietl();
        friend string sasiad(Tdomownik& domownik);
        friend class Tsasiad;

    protected:

    private:
        string nazwa, sekret;
        static int kod;
};

class Tsasiad
{
    public:
        Tsasiad(const string& nazwa);
        void info(Tdomownik& domownik);

    protected:

    private:
        string nazwa;

};

#endif // TDOMOWNIK_H
