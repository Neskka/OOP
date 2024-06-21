#ifndef TSKRZYPCE_H
#define TSKRZYPCE_H
#include <string>
#include <Tinstrument.h>

using namespace std;

class Tskrzypce : public Tinstrument
{
    public:
        Tskrzypce();
        Tskrzypce(string nazwa);
        virtual ~Tskrzypce();
        string dzwiek();

    protected:


    private:
};

#endif // TSKRZYPCE_H
