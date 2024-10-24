#include <iostream>
using namespace std;

class point
{
public:
    int x, y;
    point(int vx, int vy) : x(vx), y(vy) {}

    point() : x(0), y(0) {} // B

    friend point operator+(const point &p1, const point &p2); // 重载运算符"+"
    friend point operator-(const point &p1, const point &p2); // 重载运算符"-"

    void print()
    {
        cout << x << " " << y << "\n";
    }
};

point operator+(const point &p1, const point &p2)
{
    point p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;
    return p; // 返回当前对象与p对象之和
}

point operator-(const point &p1, const point &p2)
{
    point p;
    p.x = p1.x - p2.x;
    p.y = p1.y - p2.y;
    return p; // 返回当前对象与p对象之差
}

int main()
{
    point p1(40, 20), p2(35, -20), p3;
    p1 = p1 + p2;
    p1.print();
    p3 = p1 - p2;
    p3.print();

    return 0;
}
