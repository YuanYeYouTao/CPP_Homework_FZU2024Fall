#include<iostream>
#include<string>
#include"9.20-4-student.h"
using namespace std;
int main()
{
    student stu[3];
    for(int i = 0 ; i < 3 ; i++)
    {
        stu[i].SetScore4();
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        stu[i].Disp4();
    }
    return 0;
}