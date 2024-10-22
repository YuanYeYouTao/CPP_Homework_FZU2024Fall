#include<iostream>
using namespace std;
int add(int , int = 10);
int main()
{
    int a;
    cin>>a;
    cout<<"sum1="<<add(a)<<endl;//B
    cout<<"sum2="<<add(a,add(a))<<endl;//C
    cout<<"sum3="<<add(a,add(a,add(a)))<<endl;//D
}
int add(int i , int j )
{
    return i+j;
}