#include <iostream>
using namespace std;
class Array_max
{
public:
    void set_value();
    void max_value();
    void show_value();

private:
    int array[10];
    int max;
};
void Array_max::set_value()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
}
void Array_max::max_value()
{
    max = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
}
void Array_max::show_value()
{
    cout << "max = " << max;
}
