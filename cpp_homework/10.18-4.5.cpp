#include <iostream>
using namespace std;
class A
{
public:
    void f1()
    {
        cout << "f1" << endl;
    }
    int i;

protected:
    void f2();
    int j;

private:
    int k;
};
class B : public A
{
public:
    void f3()
    {
        cout << "f3" << endl;
    }

protected:
    int m;

private:
    int n;
};

class C : public B
{
public:
    void f4()
    {
        cout << "f4" << endl;
    }

private:
    int p;
};
int main()
{
    A a1;
    B b1;
    C c1;
    c1.f1();
    c1.f3();
    c1.f4();
    return 0;
}