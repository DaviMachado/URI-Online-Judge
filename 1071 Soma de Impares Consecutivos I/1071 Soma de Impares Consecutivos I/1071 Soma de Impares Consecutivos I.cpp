#include<iostream>
using namespace std;
int main()
{
	int a, b, i, aux = 0, aux2 = 0;
	cin >> a;
	cin >> b;

	if (a > b)
	{
		a = a - 1;
		b = b + 1;
	}

	if (a < b)
	{
		aux2 = a;
		a = b;
		b = aux2;
		a = a - 1;
		b = b + 1;
	}
	
	for (i = b; i <= a; i++)
	{
		if (i % 2 != 0)
		{
			aux = aux + i;
		}
	}

	cout << aux << endl;

	system("PAUSE");
	return 0;
}