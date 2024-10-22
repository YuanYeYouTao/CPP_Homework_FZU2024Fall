#include<iostream>
using namespace std;
struct zg
{
    char num[10];
    double wages;
} s[5];
int main()
{
    double sum = 0 , ave = 0;
    for(int i = 0 ; i < 5 ; i++ )
    {
        cin>>s[i].num>>s[i].wages;
        sum += s[i].wages;
    }
    ave = sum/5;
    cout<<"sum = "<<sum<<" ave = "<<ave<<endl;
}