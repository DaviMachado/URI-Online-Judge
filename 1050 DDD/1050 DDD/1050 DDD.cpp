#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	/*   DDD       Destination
	     61          Brasilia
		 71          Salvador
		 11         Sao Paulo
		 21       Rio de Janeiro
		 32        Juiz de Fora
		 19          Campinas
		 27          Vitoria
		 31        Belo Horizonte */

	if (a == 61)
	{
		cout << "Brasilia" << endl;
	}

	else if (a == 71)
	{
		cout << "Salvador" << endl;
	}

	else if (a == 11)
	{
		cout << "Sao Paulo" << endl;
	}

	else if (a == 21)
	{
		cout << "Rio de Janeiro" << endl;
	}

	else if (a == 32)
	{
		cout << "Juiz de Fora" << endl;
	}

	else if (a == 19)
	{
		cout << "Campinas" << endl;
	}

	else if (a == 27)
	{
		cout << "Vitoria" << endl;
	}

	else if (a == 31)
	{
		cout << "Belo Horizonte" << endl;
	}

	else
	{
		cout << "DDD nao cadastrado" << endl;
	}

	system("PAUSE");
	return 0;
}