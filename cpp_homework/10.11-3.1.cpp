#include <iostream>
using namespace std;

class complex
{
    float real, imag;

public:
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    complex()
    {
        real = 0;
        imag = 0;
    }

    void print()
    {
        cout << real;
        if (imag > 0)
            cout << "+";
        if (imag != 0)
            cout << imag << "i\n";
    }

    complex operator+(const complex &b)
    {
        complex temp;
        temp.real = this->real + b.real;
        temp.imag = this->imag + b.imag;
        return temp;
    }

    complex operator-(const complex &b)
    {
        complex temp;
        temp.real = this->real - b.real;
        temp.imag = this->imag - b.imag;
        return temp;
    }

    complex operator*(const complex &b)
    {
        complex temp;
        temp.real = this->real * b.real - this->imag * b.imag;
        temp.imag = this->real * b.imag + this->imag * b.real;
        return temp;
    }

    complex operator/(const complex &b)
    {
        complex temp;
        float tt = 1 / (b.real * b.real + b.imag * b.imag);
        temp.real = (this->real * b.real + this->imag * b.imag) * tt;
        temp.imag = (b.real * this->imag - this->real * b.imag) * tt;
        return temp;
    }
};

int main()
{
    complex c1(2.3, 4.5), c2(6.7, 8.9), c3;
    c1.print();
    c2.print();

    c1 = c1 + c2;
    c1.print();

    c2 = c2 - c1;
    c2.print();

    c3 = c1 * c2;
    c3.print();

    c3 = c1 / c2;
    c3.print();

    return 0;
}
