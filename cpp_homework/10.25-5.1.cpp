#include <iostream>
#include <string.h>
using namespace std;
class Hard
{
private:
    char hname[20];

public:
    Hard() {};
    Hard(char *n)
    {
        strcpy(hname, n);
    };
    Hard(const Hard &h)
    {
        strcpy(hname, h.hname);
    }
    void Show()
    {
        cout << "Hard:" << hname << " ";
    }
};
class Soft
{
private:
    char sname[20];

public:
    Soft() {};
    Soft(char *n)
    {
        strcpy(sname, n);
    };
    Soft(const Soft &s)
    {
        strcpy(sname, s.sname);
    }
    void Show()
    {
        cout << "Soft:" << sname << " ";
    }
};
class Computer1 : public Hard, public Soft
{
private:
    char cname[20];

public:
    Computer1() {};
    Computer1(char *cn, Hard &h, Soft &s) : Hard(h), Soft(s)
    {
        strcpy(cname, cn);
    };
    Computer1(char *cn, char *hn, char *sn) : Hard(hn), Soft(sn)
    {
        strcpy(cname, cn);
    };
    void Show()
    {
        cout << "Computer1:" << cname << " ";
        Hard::Show();
        Soft::Show();
        cout << endl;
    }
};

class Computer2
{
private:
    char cname[20];
    Hard hard;
    Soft soft;

public:
    Computer2() {};
    Computer2(char *cn, Hard &h, Soft &s) : hard(h), soft(s)
    {
        strcpy(cname, cn);
    };
    Computer2(char *cn, char *hn, char *sn) : hard(hn), soft(sn)
    {
        strcpy(cname, cn);
    };
    void Show()
    {

        cout << "Computer2:" << cname << " ";
        hard.Show();
        soft.Show();
        cout << endl;
    }
};

int main()
{
    Hard h("cpu");
    Soft s("Windows 7");

    // A
    Computer1 c1("huawei", h, s);
    Computer1 c2("huawei", "cpu", "windows 11");
    c1.Show();
    c2.Show();
    // B
    Computer2 c3("huawei", h, s);
    Computer2 c4("huawei", "cpu", "windows 11");
    c3.Show();
    c4.Show();
    // C
    return 0;
}