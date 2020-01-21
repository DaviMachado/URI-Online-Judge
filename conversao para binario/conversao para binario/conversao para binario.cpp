#include<iostream>
#include<string>
using namespace std;

int main()
{
	int decimal = 0, aux = 0;
	string bin;
	cout << "Conversão para binario" << endl;
	cout << "Digite um valor decimal: " << endl;
	cin >> decimal;
	aux = decimal;
	while (decimal <= 0)
	{
		cout << "Digite novamente: " << endl;
		cin >> decimal;
	}
	while (decimal > 0)
	{
		if (decimal % 2 == 0)
		{
			bin = "0" + bin;
		}
		else
		{
			bin = "1" + bin;
		}
		decimal = decimal / 2;
	}
	cout << "O binario de " << aux << " eh: " << bin << endl;
	system("PAUSE");
	return 0;
}