#ifndef TDATA_H
#define TDATA_H

using namespace std;

class Tdata
{
    public:
        Tdata();
        Tdata(int dd, int mm, int rr) : d(dd), m(mm), r(rr) {};
        virtual ~Tdata();
        void wczytaj();
        void wyswietl();
        int getR();

    protected:

    private:
        int d, m, r;
};

#endif // TDATA_H
