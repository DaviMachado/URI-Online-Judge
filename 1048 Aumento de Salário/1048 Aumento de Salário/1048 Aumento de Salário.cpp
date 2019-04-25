#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	 /* Salário     Percentual de Reajuste
	   0 - 400.00              15%    
	 400.01 - 800.00           12%
	 800.01 - 1200.00          10%
	 1200.01 - 2000.00          7%
	 Acima de 2000.00           4% */

	double s = 0, r = 0, n = 0;
	cout << fixed << setprecision(2);
	cin >> s;
	
	if (s > 0)
	{
		if (s <= 400)
		{
			r = (s * 15) / 100;
			n = r + s;
			cout << "Novo salario: " << n << endl;
			cout << "Reajuste ganho: " << r << endl;
			cout << "Em percentual: 15 %" << endl;
		}
	}

	if (s > 400)
	{
		if (s <= 800)
		{
			r = (s * 12) / 100;
			n = r + s;
			cout << "Novo salario: " << n << endl;
			cout << "Reajuste ganho: " << r << endl;
			cout << "Em percentual: 12 %" << endl;
		}
	}

	if (s > 800)
	{
		if (s <= 1200)
		{
			r = (s * 10) / 100;
			n = r + s;
			cout << "Novo salario: " << n << endl;
			cout << "Reajuste ganho: " << r << endl;
			cout << "Em percentual: 10 %" << endl;
		}
	}

	if (s > 1200)
	{
		if (s <= 2000)
		{
			r = (s * 7) / 100;
			n = r + s;
			cout << "Novo salario: " << n << endl;
			cout << "Reajuste ganho: " << r << endl;
			cout << "Em percentual: 7 %" << endl;
		}
	}

	if (s > 2000)
	{
		r = (s * 4) / 100;
		n = r + s;
		cout << "Novo salario: " << n << endl;
		cout << "Reajuste ganho: " << r << endl;
		cout << "Em percentual: 4 %" << endl;
	}

	system("PAUSE");
	return 0;
}