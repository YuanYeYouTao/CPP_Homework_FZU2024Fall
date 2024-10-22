#include<iostream>
using namespace std;
class Box{
    private:
        double length;
        double width;
        double height;
    public:
        Box();
        Box(double l = 10 , double w = 10 , double h = 10 );
        void show_volume();
};
Box::Box()
{
    height = 10;
    width = 10;
    length = 10;
}
Box::Box(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}
void Box::show_volume()
{
    cout<<height*width*length<<endl;
}