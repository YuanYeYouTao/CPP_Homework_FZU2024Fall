#include <iostream>
using namespace std;
class Shape
{
public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }

protected:
    int width;
    int height;
};

class PaintCost
{
public:
    int getCost(int area) { return area * 50; }
};

class Rectangle : public Shape, public PaintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main(void)
{
    Rectangle Rect;
    int area;

    Rect.setWidth(2);
    Rect.setHeight(3);
    area = Rect.getArea();
    cout<<"Total area:"<<Rect.getArea()<<endl;
    cout<<"Total paint cost:"<<Rect.getCost(area)<<endl;
    return 0;
}