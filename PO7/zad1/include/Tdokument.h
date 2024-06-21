#ifndef TDOKUMENT_H
#define TDOKUMENT_H
#include <string>

using namespace std;

struct Tdata
{
    int d, m, r;
};

class Tdokument
{
    public:
        Tdokument();
        virtual ~Tdokument();
        void wczytaj();
        void wyswietl();

    protected:
        string nr, nazwa;
        Tdata data;

    private:
};

#endif // TDOKUMENT_H
