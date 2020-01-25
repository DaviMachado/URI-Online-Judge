#include <iostream>
using namespace std;
int main()
{
	int a, i, aux = 1, aux2 = 0, aux3 = 0;
	cin >> a;

	while (a % 2 == 0)
	{
		cin >> a;
	}

	aux2 = a - 1;
	aux3 = aux2 / 2;

	while (aux < a)
	{
		for (i = 0; i < aux3; i++)
		{
			cout << " ";
		}
		for (i = 0; i < aux; i++)
		{
			cout << "*";
		}
		for (i = 0; i < aux3; i++)
		{
			cout << " ";
		}
		cout << endl;
		aux += 2;
		aux3 -= 1;
	}

	if (aux == a)
	{
		for (i = 0; i < a; i++)
		{
			cout << "*";
		}
		cout << endl;
	}

	while (aux > 1)
	{
		aux -= 2;
		aux3 += 1;
		for (i = 0; i < aux3; i++)
		{
			cout << " ";
		}
		for (i = 0; i < aux; i++)
		{
			cout << "*";
		}
		for (i = 0; i < aux3; i++)
		{
			cout << " ";
		}
		cout << endl;
	}

	return 0;
}