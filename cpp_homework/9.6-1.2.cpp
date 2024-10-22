#include<iostream>
#include<string>
using namespace std;
template <typename T>
void bob(T &a , T &b , T &c )
{
    T temp;
    if(a < b)
    {
        temp = a ; 
        a = b ; 
        b = temp ;
    }
    if(b < c)
    {
        temp = b ; 
        b = c ;
        c = temp ;
    }
    if(a < b)
    {
        temp = a;
        a = b ;
        b = temp ;
    }
}

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    bob(a,b,c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
