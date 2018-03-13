#ifndef WADGET_H
#define WADGET_H

class Wadget{
public:
    Wadget(double a, double b);
    void print();
    static double calculation();
    static int wadgetCount();
private:
    double m_d1, m_d2;
    static int m_wadgetCount;
};

#endif // WADGET_H
