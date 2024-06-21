#ifndef TDATA_H
#define TDATA_H
#include <iostream>

using namespace std;


class Tdata
{
    public:
        Tdata();
        Tdata(int dd, int mm, int rr):d(dd), m(mm), r(rr){cout << "Konstruktor z lista klasy Tdata" << endl;};
        virtual ~Tdata();
        void wczytaj();
        void wyswietl();
        int getR();
    protected:

    private:
        int d, m, r;
};

#endif // TDATA_H
