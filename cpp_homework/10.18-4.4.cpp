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
    void f3();

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
    C c1;
    cout << "c1.i=" << c1.i;
    return 0;
}