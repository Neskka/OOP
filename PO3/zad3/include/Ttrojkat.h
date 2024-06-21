#ifndef TTROJKAT_H
#define TTROJKAT_H

using namespace std;

class Ttrojkat
{
    public:
        Ttrojkat();
        Ttrojkat(float a, float b, float c);
        virtual ~Ttrojkat();
        void wczytaj();
        void pole();
        void pole(float h);

    protected:

    private:
        float a, b, c;
};

#endif // TTROJKAT_H
