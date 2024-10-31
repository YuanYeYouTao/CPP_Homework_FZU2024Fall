#include <iostream>
using namespace std;

class base1
{
public:
    base1()
    {
        cout << "this is base1 class!\n";
    }
};

class base2
{
public:
    base2()
    {
        cout << "this is base2 class!\n";
    }
};

class level1 : public base2, base1
{
public:
    level1()
    {
        cout << "this is level1 class!\n";
    }
};

class level2 : public base2, base1
{
public:
    level2()
    {
        cout << "this is level2 class!\n";
    }
};

class toplevel : public level1, public level2
{
public:
    toplevel()
    {
        cout << "this is toplevel class!\n";
    }
};

int main()
{
    toplevel topobj;
    return 0;
}