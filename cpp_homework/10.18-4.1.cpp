#include <iostream>
using namespace std;
class A
{
public:
    void f1() { cout << "f1" << endl; }
    int i;

protected:
    void f2()
    {
        f1();
        cout << "This is f2" << endl;
    }
    int j;

private:
    int k;
};
class B : public A
{
public:
    void f3()
    {
        f2();
        cout << "This is f3" << endl;
    }

protected:
    int m;

private:
    int n;
};

class C : public B
{
public:
    void f4() {}

private:
    int p;
};
int main()
{
    A a1;
    B b1;
    C c1;
    c1.f3();
    return 0;
}