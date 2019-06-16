#include<iostream>
using namespace std;
int main()
{
	int a = 0, i = 0, x = 0, aux = 0, aux2 = 0;
	cin >> a;

	for (i = 0; i < a; i++)
	{
		cin >> x;
		if (x >= 10)
		{
			if (x <= 20)
			{
				aux = aux + 1;
			}
		}
		if (x < 10)
		{
			aux2 = aux2 + 1;
		}
		if (x > 20)
		{
			aux2 = aux2 + 1;
		}
	}

	cout << aux << " in" << endl;
	cout << aux2 << " out" << endl;

	system("PAUSE");
	return 0;
}