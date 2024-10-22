#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout<<"The program name is : "<<argv[0]<<"\n";
    if (argc<=1)
         cout<<"None argument\n";
    else
    {
        int nCount = 1;
        while(nCount < argc)
        {
            cout<<"The"<<nCount<<" argument is "<<argv[nCount]<<"\n";
            nCount++;
        }
    }
}