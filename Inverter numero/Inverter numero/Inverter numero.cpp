#include<iostream>
using namespace std;
int main()
{
	int num, aux = 0;
	setlocale(LC_ALL, "portuguese_brazil");

	cout << "Digite um número:" << endl;
	cin >> num;

	if (num > 0)
	{
		cout << "Número invertido" << endl;
		do
		{
			aux = num % 10;
			cout << aux;
			num /= 10;
		} while (num != 0);
		cout << endl;
	}

	else if (num < 0)
	{
		cout << "Número invertido" << endl;
		num *= -1;
		cout << "-";
		do
		{
			aux = num % 10;
			cout << aux;
			num /= 10;
		} while (num != 0);
		cout << endl;
	}

	else
	{
		cout << "NULO" << endl;
	}

	system("PAUSE");
	return 0;
}