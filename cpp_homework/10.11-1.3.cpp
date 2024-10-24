#include <iostream>
using namespace std;

template <typename T>
T plus1(T x, T y)
{
    return x + y;
}

int main()
{
    int i = 12, j = 34;
    float x1 = 1.2, y1 = 4.5;
    double x2 = 24.5, y2 = 635.4;

    cout << plus1(i, j) << endl;
    cout << plus1(x1, y1) << endl;
    cout << plus1(x2, y2) << endl;

    return 0;
}
