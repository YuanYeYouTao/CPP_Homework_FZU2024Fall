#include <iostream>
using namespace std;

class plus1
{
public:
    plus1(int x, int y)
    {
        cout << x + y << endl;
    }
    plus1(float x, float y)
    {
        cout << x + y << endl;
    }
    plus1(double x, double y)
    {
        cout << x + y << endl;
    }
};

int main()
{
    int i = 12, j = 34;
    float x1 = 1.2, y1 = 4.5;
    double x2 = 24.5, y2 = 635.4;
    plus1 A1(i, j);
    plus1 A2(x1, y1);
    plus1 A3(x2, y2);
    return 0;
}
