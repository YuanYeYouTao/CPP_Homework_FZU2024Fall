#include<iostream>
using namespace std;
int Smin(int a , int b);
int San_Min(int a , int b , int c);
int Yo_Min(int a, int b, int c, int d);
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<Smin(a,b);
}
int Smin(int a , int b)
{
    return (a<b)?a:b;
}
int San_Min(int a , int b , int c)
{
    return Smin(Smin(a,b),c);
}
int Yo_Min(int a, int b, int c, int d)
{
    return Smin(San_Min(a,b,c),d);
}