#include <iostream>
using namespace std;

class data
{
    int x;

public:
    data(int x)
    {
        this->x = x;
        cout << "class data\n";
    }
};

class a
{
    data d1;

public:
    a(int x) : d1(x)
    {
        cout << "class a\n";
    }
};

class b : public a
{
    data d2;

public:
    b(int x) : a(x), d2(x)
    {
        cout << "class b\n";
    }
};

class c : public b
{
    data d3;
public:
    c(int x) : b(x), d3(x)
    {
        cout << "class c\n";
    }
};

int main()
{
    c object(5);
    return 0;
}