#include<iostream>
using namespace std;
void calCircleArea();
void set_radius(double &r);
void calculate_area(double &r , double &a);
void print_area(double a);
int main()
{
    double r , area;
    cout<<"Please enter the radius: ";
    set_radius(r);
    calculate_area( r , area );
    print_area(area);
}
void calCircleArea()
{
    double r ,area;
    cin>>r;
    area = 3.14159 * r * r;
    cout<<area;
}
void set_radius(double &r)
{
    cin>>r;
}
void calculate_area(double &r , double &a)
{
    a = 3.14159 * r * r;
}
void print_area(double a)
{
    cout<<a<<endl;
}