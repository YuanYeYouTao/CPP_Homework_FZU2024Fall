#include <iostream>
using namespace std;

int main()
{
	int add(int, int = 10); // ����һ����Ϊadd�ĺ���
	int a;
	cin >> a;
	cout << "sum1=" << add(a) << endl;				   // ����add���������a+10
	cout << "sum2=" << add(a, add(a)) << endl;		   // ���ε���add���������a+a+10
	cout << "sum3=" << add(a, add(a, add(a))) << endl; // ���ε���add���������a+10+a+a
}

int add(int i, int j)
{
	return (i + j);
}