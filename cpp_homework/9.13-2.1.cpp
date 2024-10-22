#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a[7];
    for(int i = 0 ; i < 7 ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+7);
    for(int i = 0 ; i < 7 ; i++)
    {
        cout<<a[i]<<" ";
    }
}