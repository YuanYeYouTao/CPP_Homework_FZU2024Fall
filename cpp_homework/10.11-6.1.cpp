#include <iostream>
using namespace std;

class Complex {
public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    Complex(double r) : real(r), imag(0) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator+(double num) const {
        return Complex(real + num, imag);
    }
    friend ostream& operator<<(ostream& os, const Complex& c) {
        if (c.imag >= 0) {
            os << c.real << "+" << c.imag << "i";
        } else {
            os << c.real << c.imag << "i";
        }
        return os;
    }
    friend Complex operator+(double value, const Complex& c) {
        return Complex(value + c.real, c.imag);
    }

private:
    double real, imag;
};

int main() {
    Complex c1(3, 4), c2(5, -10), c3;
    Complex d;
    // d = c1 + 2.5; // 1
    // cout << d << endl;
    // c3 = c1 + c2; // 2
    // cout << c3 << endl;
    d = c1 + c2; // 3
    cout << d << endl;
    // c3 = 2.5 + c1; // 4
    // cout << c3 << endl;
    return 0;
}
