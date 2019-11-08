#include<iostream>
using namespace std;
int main()
{
	int x, i, aux = 0;
	cin >> x;

	while (x != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (x % 2 == 1)
			{
				x = x + 1;
			}
			if (x % 2 == 0)
			{
				aux = aux + x;
			}
			x = x + 2;
		}
		cout << aux << endl;
		aux = 0;
		cin >> x;
	}

	system("PAUSE");
	return 0;
}