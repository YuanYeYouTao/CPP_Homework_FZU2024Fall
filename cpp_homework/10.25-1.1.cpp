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
private:
    int area;
public:
    Rectangle()
    {
        width = 0;
        height = 0;
    }
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    int getArea()
    {
        return (width * height);
    }
};

int main(void)
{
    Rectangle Rect(7, 8);

    cout<<"Total area:"<<Rect.getArea()<<endl;
    cout<<"Total paint cost:"<<Rect.getCost(Rect.getArea())<<endl;
    return 0;
}