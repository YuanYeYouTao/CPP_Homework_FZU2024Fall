#include<iostream>
using namespace std;
#define PI 3.14159
double calCircle_Area(double r)
{
    double area;
    area = PI * r * r;
    return area;
}
double set_radius()
{
    double radius;
    cout<<"Please enter the radius"<<endl;
    cin>>radius;
    return radius;
}
void print_area(double area)
{
    cout<<"The area of circle is "<<area<<endl;
}