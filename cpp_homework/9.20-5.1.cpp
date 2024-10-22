#include<iostream>
#include"9.20-5-box.h"
using namespace std;
int main()
{
    Box a(6) , b(5,4) , c(2,3,5);
    a.show_volume();
    b.show_volume();
    c.show_volume();
}