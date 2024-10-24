#include <iostream>
#include "9.20-2.1.h"
using namespace std;
int main()
{
    double r, a;
    r = set_radius();
    a = calCircle_Area(r);
    print_area(a);
    return 0;
}