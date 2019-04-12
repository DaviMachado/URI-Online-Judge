#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double a, b, c, aux = 0;
	cin >> a >> b >> c;

	if (b > a && b > c)
	{
		aux = a;
		a = b;
		b = aux;
	}
	else if (c > b && c > a)
	{
		aux = a;
		a = c;
		c = aux;
	}
	
	if (a >= b + c)
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else
	{
		if (pow(a, 2) == pow(b, 2) + pow(c, 2))
		{
			cout << "TRIANGULO RETANGULO" << endl;
		}

		else if (pow(a, 2) > pow(b, 2) + pow(c, 2))
		{
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}

		else if (pow(a, 2) < pow(b, 2) + pow(c, 2))
		{
			cout << "TRIANGULO ACUTANGULO" << endl;
		}

		if (a == b && a == c && b == c)
		{
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		else if (a == b || a == c || b == c)
		{
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

	system("PAUSE");
	return 0;
}