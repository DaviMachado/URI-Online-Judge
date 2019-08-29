#include<iostream>
using namespace std;
int main()
{
	int x, y, i, aux = 0, soma = 0;
	cin >> x;
	cin >> y;

	if (y > x)
	{
		aux = x;
		x = y;
		y = aux;
	}

	for (i = y; i <= x; i++)
	{
		if (i % 13 != 0)
		{
			soma = soma + i;
		}
	}

	cout << soma << endl;

	system("PAUSE");
	return 0;
}