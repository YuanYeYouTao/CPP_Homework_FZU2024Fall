#include<iostream>
#include"9.20-2.1.h"
using namespace std;
class Circle{
    private:
        double r;
        double a;
    public:
        void get_radius();
        void get_area();
        void show_area();
};
void Circle::get_radius()
{
    r = set_radius();
}
void Circle::get_area()
{
    a = calCircle_Area(r);
}
void Circle::show_area()
{
    print_area(a);
}
int main()
{
    Circle c2;
    c2.get_radius();
    c2.get_area();
    c2.show_area();
}