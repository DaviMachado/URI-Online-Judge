#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i, j, aux = 0, aux2 = 0;
	
	cin >> c;
	for (j = 0; j < c; j++)
	{
		cin >> a >> b;

		if (a > b)
		{
			a = a - 1;
			b = b + 1;
		}

		else if (a < b)
		{
			aux2 = a;
			a = b;
			b = aux2;
			a = a - 1;
			b = b + 1;
		}

		else if (a == b)
		{
			a = 0;
			b = 0;
		}

		for (i = b; i <= a; i++)
		{
			if (i % 2 != 0)
			{
				aux = aux + i;
			}
		}
		cout << aux << endl;
		aux = 0;
	}
	
	system("PAUSE");
	return 0;
}