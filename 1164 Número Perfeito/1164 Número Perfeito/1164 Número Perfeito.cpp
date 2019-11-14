#include<iostream>
using namespace std;
int main()
{
	int a, b, i, j, aux = 0;
	cin >> a;

	for (i = 0; i < a; i++)
	{
		cin >> b;
		for (j = 1; j < b; j++)
		{
			if (b % j == 0)
			{
				aux += j;
			}
		}
		if (aux == b)
		{
			cout << b << " eh perfeito" << endl;
		}
		else
		{
			cout << b << " nao eh perfeito" << endl;
		}
		aux = 0;
	}

	system("PAUSE");
	return 0;
}