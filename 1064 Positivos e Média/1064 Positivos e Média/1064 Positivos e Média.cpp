#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, aux = 0, aux2 = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;

	if (a > 0)
	{
		aux = aux + 1;
		aux2 = aux2 + a;
	}
	else
	{
		aux = aux + 0;
	}

	if (b > 0)
	{
		aux = aux + 1;
		aux2 = aux2 + b;
	}
	else
	{
		aux = aux + 0;
	}

	if (c > 0)
	{
		aux = aux + 1;
		aux2 = aux2 + c;
	}
	else
	{
		aux = aux + 0;
	}

	if (d > 0)
	{
		aux = aux + 1;
		aux2 = aux2 + d;
	}
	else
	{
		aux = aux + 0;
	}

	if (e > 0)
	{
		aux = aux + 1;
		aux2 = aux2 + e;
	}
	else
	{
		aux = aux + 0;
	}

	if (f > 0)
	{
		aux = aux + 1;
		aux2 = aux2 + f;
	}
	else
	{
		aux = aux + 0;
	}

	aux2 = aux2 / aux;

	cout << aux << " valores positivos" << endl;

	cout << fixed << setprecision(1);
	cout << aux2 << endl;

	system("PAUSE");
	return 0;
}