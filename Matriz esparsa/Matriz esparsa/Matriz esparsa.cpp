#include<iostream>
using namespace std;
int main()
{
	int q, n, a = 4, b = 0, aux = 2, aux2 = 3, i, j;
	cin >> q;

	for (i = 0; i < q; i++)
	{
		cin >> n;
		for (j = 2; j < n; j++)
		{
			a += aux2;
			b += aux;
			aux += 2;
		}
		if (a>b)
		{
			cout << "N " << b << endl;
		}
		else
		{
			cout << "S " << b << endl;
		}
		a = 4;
		b = 0;
		aux = 2;
	}

	system("PAUSE");
	return 0;
}