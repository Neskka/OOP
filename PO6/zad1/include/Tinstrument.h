#ifndef TINSTRUMENT_H
#define TINSTRUMENT_H
#include <string>

using namespace std;

class Tinstrument
{
    public:
        Tinstrument();
        Tinstrument(string naz);
        virtual ~Tinstrument();
        virtual string dzwiek();
        void muzyka(int n);

    protected:
        string nazwa;

    private:
};

#endif // TINSTRUMENT_H
