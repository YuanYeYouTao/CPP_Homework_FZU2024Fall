#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A() { cout << "constructing A " << endl; }
    A(int a)
    {
        this->a = a;
        cout << "constructing A " << endl;
    }
    ~A() { cout << "destructing A " << endl; }
};

class B : public A
{
    int b;

public:
    B() { cout << "constructing B " << endl; }
    B(int a) : A(a) { cout << "constructing B " << endl; }
    B(int a, int b) : A(a)
    {
        this->b = b;
        cout << "constructing B " << endl;
    }
    ~B() { cout << "destructing B " << endl; }
};

class C : public B
{
    int c;

public:
    C() { cout << "constructing C " << endl; }
    C(int a) : B(a) { cout << "constructing C " << endl; }
    C(int a, int b, int c) : B(a, b)
    {
        this->c = c;
        cout << "constructing C " << endl;
    }
    ~C() { cout << "destructing C " << endl; }
};

int main()
{
    C c3(1, 2, 3);

    return 0;
}