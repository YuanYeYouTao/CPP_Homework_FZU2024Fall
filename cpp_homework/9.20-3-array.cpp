#include <iostream>
#include "9.20-3-array.h"
using namespace std;
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
