#include<iostream>
using namespace std;
int main()
{
	int x, a, b, i, j, aux = 0;
	cin >> x;

	for (i = 0; i < x; i++)
	{
		cin >> a >> b;
		for (j = 0; j < b; j++)
		{
			if (a % 2 == 0)
			{
				a = a + 1;
			}
			if (a % 2 != 0)
			{
				aux = aux + a;
				a = a + 2;
			}
		}
		cout << aux << endl;
		aux = 0;
	}

	system("PAUSE");
	return 0;
}