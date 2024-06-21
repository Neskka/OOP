#ifndef TKWADRAT2_H
#define TKWADRAT2_H
#include <string>
#include <Tprostokat2.h>

using namespace std;

class Tkwadrat2 : public Tprostokat2
{
    public:
        Tkwadrat2();
        Tkwadrat2(string naz);
        virtual ~Tkwadrat2();
        void info();
        void rysuj();
        void wczytajDane();
        float pole();
        float obwod();

    protected:
        float a;

    private:
};

#endif // TKWADRAT2_H
