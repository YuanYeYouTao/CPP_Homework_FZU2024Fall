#include <iostream>
using namespace std;
class A
{
public:
    void f1();
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
        cout << "f3:" << endl;
        cout << "i=" << i << endl;
        cout << "j=" << j << endl;
    }

protected:
    int m;

private:
    int n;
};

class C : public B
{
public:
    void f4();

private:
    int p;
};
int main()
{
    A a1;
    B b1;
    C c1;
    b1.f3();
    return 0;
}