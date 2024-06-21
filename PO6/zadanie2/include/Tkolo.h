#ifndef TKOLO_H
#define TKOLO_H
#include <string>
#include <Tfigura.h>

using namespace std;

class Tkolo : public Tfigura
{
    public:
        Tkolo();
        Tkolo(string nazwa);
        virtual ~Tkolo();
        float podajR();
        float pole();
        float obwod();

    protected:

    private:
};

#endif // TKOLO_H
