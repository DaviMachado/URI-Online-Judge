#include<iostream>
using namespace std;
int main()
{
	int x, a = 0, g = 0, d = 0;
	cin >> x;

	while (x != 4)
	{
		if (x == 1)
		{
			a = a + 1;
		}
		if (x == 2)
		{
			g = g + 1;
		}
		if (x == 3)
		{
			d = d + 1;
		}
		cin >> x;
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << a << endl;
	cout << "Gasolina: " << g << endl;
	cout << "Diesel: " << d << endl;

	system("PAUSE");
	return 0;
}