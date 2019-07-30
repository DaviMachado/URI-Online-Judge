#include<iostream>
using namespace std;
int main()
{
	int m, n, i, soma = 0;
	cin >> m >> n;
	
	while (m && n != 0)
	{
		if (m > n)
		{
			for (i = n; i <= m; i++)
			{
				cout << i;
				soma = soma + i;
				if (n < m)
				{
					cout << " ";
				}
			}
			cout << "Sum=" << soma << endl;
		}
		
		else if (n > m)
		{
			for (i = m; i <= n; i++)
			{
				cout << i;
				soma = soma + i;
				if (m < n)
				{
					cout << " ";
				}
			}
			cout << "Sum=" << soma << endl;
		}
		soma = 0;
		cin >> m >> n;
	}

	system("PAUSE");
	return 0;
}