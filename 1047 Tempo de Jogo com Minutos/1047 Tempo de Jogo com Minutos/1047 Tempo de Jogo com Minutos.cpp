#include<iostream>
using namespace std;
int main()
{
	int i = 0, i2 = 0, f = 0, f2 = 0, r = 0, r2 = 0;
	cin >> i >> i2 >> f >> f2;

	if ((i == i2) && (f == f2)) // Horas iguais e minutos iguais
	{
			cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
	}
	
	if ((i == i2) && (i2 < f2)) // Horas iguais e minuto inicial menor
	{
		r = 24 - i + f;
		if (r >= 24)
		{
			r = abs(24 - (24 - i + f));
		}
		r2 = 60 - i2 + f2;
		if (r2 >= 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}

	if ((i == i2) && (i2 > f2)) // Horas iguais e minuto inicial maior
	{
		r = 24 - i + f;
		r = r - 1;
		if (r > 24)
		{
			r = abs(24 - (24 - i + f));
		}
		r2 = 60 - i2 + f2;
		if (r2 > 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}
	
	if ((i > f) && (i2==f2)) // Hora inicial maior e minutos iguais
	{
		r = 24 - i + f;
		if (r >= 24)
		{
			r = abs(24 - (24 - i + f));
		}
		r2 = 60 - i2 + f2;
		if (r2 >= 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}
	
	if ((i > f) && (i2 < f2)) // Hora inicial maior e minuto inicial menor
	{
		r = 24 - i + f;
		if (r >= 24)
		{
			r = abs(24 - (24 - i + f));
		}
		r2 = 60 - i2 + f2;
		if (r2 >= 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}

	if ((i > f) && (i2 > f2)) // Hora inicial maior e minuto inicial maior
	{
		r = 24 - i + f;
		r = r - 1;
		if (r >= 24)
		{
			r = abs(24 - (24 - i + f));
		}
		r2 = 60 - i2 + f2;
		if (r2 >= 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}

	if ((i < f) && (i2 == f2)) // Hora inicial menor e minutos iguais
	{
		r = 24 - i + f;
		if (r >= 24)
		{
			r = abs(24 - (24 - i + f));
		}
		r2 = 60 - i2 + f2;
		if (r2 >= 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}

	if ((i < f) && (i2 < f2)) // Hora inicial menor e minuto inicial menor
	{
		r = 24 - i + f;
		if (r >= 24)
		{
			r = abs(24 - (24 - i + f));
		}
		r2 = 60 - i2 + f2;
		if (r2 >= 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}
	
	if ((i < f) && (i2 > f2)) // Hora inicial menor e minuto inicial maior
	{
		r = 24 - i + f;
		if (r >= 24)
		{
			r = abs(24 - (24 - i + f));
			r = r - 1;
		}
		r2 = 60 - i2 + f2;
		if (r2 >= 60)
		{
			r2 = abs(60 - (60 - i2 + f2));
		}
		cout << "O JOGO DUROU " << r << " HORA(S) E " << r2 << " MINUTO(S)" << endl;
	}

	system("PAUSE");
	return 0;
}