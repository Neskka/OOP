#ifndef TTIME_H
#define TTIME_H
#include <ostream>

using namespace std;

class Ttime
{
    public:
        Ttime(int g = 0, int m = 0);
        virtual ~Ttime();
        Ttime operator+(const Ttime& other) const;
        Ttime operator-() const;
        friend ostream& operator << (ostream& os, const Ttime& time);
        friend Ttime operator*(const Ttime& time, int n);
        friend bool operator==(const Ttime& time1, const Ttime& time2);

    protected:

    private:
        int godziny;
        int minuty;
};

#endif // TTIME_H
