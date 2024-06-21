#include "Ttime.h"
#include <iostream>

using namespace std;

Ttime::Ttime(int g, int m)
{
    godziny = g;
    minuty = m;
}

Ttime::~Ttime()
{
    //dtor
}

Ttime Ttime::operator+(const Ttime& other) const
{
    int g = godziny + other.godziny;
    int m = minuty + other.minuty;

    g += m / 60;
    m %= 60;

    return Ttime(g, m);
}

Ttime Ttime::operator-() const
{
    return Ttime(-godziny, -minuty);
}

ostream& operator<<(std::ostream& os, const Ttime& time)
{
    os << time.godziny << " godz. " << time.minuty << " min.";
    return os;
}

Ttime operator*(const Ttime& time, int n)
{
    int g = time.godziny * n;
    int m = time.minuty * n;

    g += m / 60;
    m %= 60;

    return Ttime(g, m);
}

bool operator==(const Ttime& time1, const Ttime& time2)
{
    return (time1.godziny == time2.godziny) && (time1.minuty == time2.minuty);
}
