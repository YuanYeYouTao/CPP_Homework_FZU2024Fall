#include <iostream>
using namespace std;
int product(int n = 5);
int main()
{
    int n, p;
    cin >> n;
    p = product(n);
    cout << p;
}
int product(int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
    }
    return p;
}