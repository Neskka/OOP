#ifndef TDZIALANIA_H
#define TDZIALANIA_H


class Tdzialania
{
    public:
        Tdzialania();
        virtual ~Tdzialania();
        void podajDane();
        int suma();
        int roznica();
        int iloczyn();
        float iloraz();

    protected:

    private:
        int a, b;
};

#endif // TDZIALANIA_H
