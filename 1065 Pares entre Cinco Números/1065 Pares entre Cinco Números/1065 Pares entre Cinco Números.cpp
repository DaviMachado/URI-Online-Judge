#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, aux = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;

	if (a % 2 == 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (b % 2 == 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (c % 2 == 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (d % 2 == 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (e % 2 == 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	cout << aux << " valores pares" << endl;

	system("PAUSE");
	return 0;
}