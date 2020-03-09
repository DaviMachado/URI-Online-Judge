#include<iostream>
using namespace std;
int main()
{
	int d, m, q, x, y, i, aux = 0;
	cin >> d >> m;

	while (d && m != 0)
	{
		cin >> q;
		for (i = 0; i < q; i++)
		{
			cin >> x >> y;
			if ((d == x)&& (m == y))
			{
				aux = 1;
			}
		}
		if (aux == 1)
		{
			cout << "S" << endl;
		}
		else
		{
			cout << "N" << endl;
		}
		aux = 0;
		cin >> d >> m;
	}

	system("PAUSE");
	return 0;
}