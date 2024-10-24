#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        a = 0;
        b = 0;
    }
    A(int i)
    {
        a = i;
        b = 0;
    }
    A(int i, int j)
    {
        a = i;
        b = j;
    }
    void display() { cout << "a =" << a << " b =" << b; }

private:
    int a;
    int b;
};
class B : public A // 1
{
public:
    B() { c = 0; }
    B(int i) : A(i) { c = 1; }
    B(int i, int j) : A(i, j) { c = 2; }
    B(int i, int j, int k) : A(i, j) { c = k; }
    void display1()
    {
        display();
        cout << "c =" << c << endl;
    }

private:
    int c;
};
int main()
{
    B b1;
    B b2(10);
    B b3(10, 30);
    B b4(10, 30, 50);
    b1.display1();
    b2.display1();
    b3.display1();
    b4.display1();
    return 0;
}