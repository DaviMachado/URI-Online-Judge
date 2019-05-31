#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, par = 0, im = 0, p = 0, n = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	
	/// A
	if (a > 0)
	{
		p = p + 1;
	}
	if (a < 0)
	{
		n = n + 1;
	}

	if (a % 2 == 0)
	{
		par = par + 1;
	}
	else
	{
		im = im + 1;
	}
	/// B
	if (b > 0)
	{
		p = p + 1;
	}
	if (b < 0)
	{
		n = n + 1;
	}

	if (b % 2 == 0)
	{
		par = par + 1;
	}
	else
	{
		im = im + 1;
	}
	/// C
	if (c > 0)
	{
		p = p + 1;
	}
	if (c < 0)
	{
		n = n + 1;
	}

	if (c % 2 == 0)
	{
		par = par + 1;
	}
	else
	{
		im = im + 1;
	}
	/// D
	if (d > 0)
	{
		p = p + 1;
	}
	if (d < 0)
	{
		n = n + 1;
	}

	if (d % 2 == 0)
	{
		par = par + 1;
	}
	else
	{
		im = im + 1;
	}
	/// E
	if (e > 0)
	{
		p = p + 1;
	}
	if (e < 0)
	{
		n = n + 1;
	}

	if (e % 2 == 0)
	{
		par = par + 1;
	}
	else
	{
		im = im + 1;
	}

	cout << par << " valor(es) par(es)" << endl;
	cout << im << " valor(es) impar(es)" << endl;
	cout << p << " valor(es) positivo(s)" << endl;
	cout << n << " valor(es) negativo(s)" << endl;

	system("PAUSE");
	return 0;
}