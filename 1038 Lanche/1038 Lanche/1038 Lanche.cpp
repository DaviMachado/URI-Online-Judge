#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a = 0, b = 0;
	float c = 0;
	cout << fixed << setprecision(2);
	cin >> a >> b;
	/*CODIGO       ESPECIFICAÇÃO        PREÇO
	    1         CACHORRO QUENTE       R$ 4.00
		2         X-SALADA              R$ 4.50
		3         X-BACON               R$ 5.00
		4         TORRADA SIMPLES       R$ 2.00
		5         REFRIGERANTE          R$ 1.50*/
	if (a == 1)
	{
		c = (b*4.00);
		cout << "Total: R$ " << c << endl;
	}

	if (a == 2)
	{
		c = (b*4.50);
		cout << "Total: R$ " << c << endl;
	}

	if (a == 3)
	{
		c = (b*5.00);
		cout << "Total: R$ " << c << endl;
	}
	
	if (a == 4)
	{
		c = (b*2.00);
		cout << "Total: R$ " << c << endl;
	}

	if (a == 5)
	{
		c = (b*1.50);
		cout << "Total: R$ " << c << endl;
	}

	system("PAUSE");
	return 0;
}