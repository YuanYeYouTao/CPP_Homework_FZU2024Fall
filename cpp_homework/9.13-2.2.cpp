#include <iostream>
using namespace std;

int main()
{
	int add(int, int = 10); // 定义一个名为add的函数
	int a;
	cin >> a;
	cout << "sum1=" << add(a) << endl;				   // 调用add函数，输出a+10
	cout << "sum2=" << add(a, add(a)) << endl;		   // 二次调用add函数，输出a+a+10
	cout << "sum3=" << add(a, add(a, add(a))) << endl; // 三次调用add函数，输出a+10+a+a
}

int add(int i, int j)
{
	return (i + j);
}