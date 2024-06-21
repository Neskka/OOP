#ifndef TTRABKA_H
#define TTRABKA_H
#include <string>
#include <Tinstrument.h>

using namespace std;

class Ttrabka : public Tinstrument
{
    public:
        Ttrabka();
        Ttrabka(string naz);
        virtual ~Ttrabka();
        string dzwiek();

    protected:

    private:
};

#endif // TTRABKA_H
