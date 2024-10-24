#include <iostream>
using namespace std;
template <typename T1, typename T2>
void max(T1 n, T2 a[])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				T2 temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	}
}

int main()
{
	int n, i;
	cout << "enter n";
	cin >> n;
	int a[n];
	double b[n];
	string c[n];

	cout << "enter the array" << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)
		cin >> b[i];
	for (i = 0; i < n; i++)
		cin >> c[i];

	max(n, a);
	max(n, b);
	max(n, c);

	cout << "sort of the array" << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	for (i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;
	for (i = 0; i < n; i++)
		cout << c[i] << " ";
	cout << endl;
}
