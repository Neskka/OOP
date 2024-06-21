#ifndef TKOLO2_H
#define TKOLO2_H
#include <string>
#include <Ifigura.h>

using namespace std;

class Tkolo2 : public Ifigura
{
    public:
        Tkolo2();
        Tkolo2(string naz);
        virtual ~Tkolo2();
        void info();
        void rysuj();
        void wczytajDane();
        float pole();
        float obwod();

    protected:
        float r;

    private:
};

#endif // TKOLO2_H
