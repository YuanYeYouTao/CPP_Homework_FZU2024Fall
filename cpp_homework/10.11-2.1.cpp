#include <iostream>
using namespace std;

class point {
    int x, y;
public:
    point(int vx, int vy) : x(vx), y(vy) {}

    point() : x(0), y(0) {}  // B

    point operator+(point p1);  
    point operator-(point p1);  

    void print() {
        cout << x << " " << y << "\n";
    }
};

point point::operator+(point p1) {
    point p;
    p.x = x + p1.x;
    p.y = y + p1.y;
    return p;  
}

point point::operator-(point p1) {
    point p;
    p.x = x - p1.x;
    p.y = y - p1.y;
    return p;  
}

int main() {
    point p1(40, 20), p2(35, -20), p3;
    p1 = p1 + p2;
    p1.print();
    p3 = p1 - p2;
    p3.print();

    return 0;
}
