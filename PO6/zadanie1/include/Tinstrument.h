#ifndef TINSTRUMENT_H
#define TINSTRUMENT_H
#include <string>

using namespace std;

class Tinstrument
{
    public:
        Tinstrument();
        Tinstrument(string nazwa);
        virtual ~Tinstrument();
        //string dzwiek(); //metoda wczesnego wiazania, wiaze sie z metoda muzyka na etapie kompilacji
        virtual string dzwiek();  // wirtualna metoda poznego wiazania wiaze sie z metoda muzyka na etapie wykonania programu - poliformizm
        void muzyka(int n);

    protected:
        string nazwa;

    private:
};

#endif // TINSTRUMENT_H
