#include<iostream>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, aux = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	
	if (a > 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (b > 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (c > 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (d > 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (e > 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	if (f > 0)
	{
		aux = aux + 1;
	}
	else
	{
		aux = aux + 0;
	}

	cout << aux << " valores positivos" << endl;

	system("PAUSE");
	return 0;
}