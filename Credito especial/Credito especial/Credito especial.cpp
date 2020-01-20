#include<iostream>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	
	if (x <= 200)
	{
		cout << "Saldo Medio: " << x << endl;
		x = 0;
		cout << "0 % de Credito: " << x << endl;
	}
	else if (x <= 400)
	{
		cout << "Saldo Medio: " << x << endl;
		x = (x * 20) / 100;
		cout << "20 % de Credito: " << x << endl;
	}
	else if (x <= 600)
	{
		cout << "Saldo Medio: " << x << endl;
		x = (x * 30) / 1000;
		cout << "30 % de Credito: " << x << endl;
	}
	else 
	{
		cout << "Saldo Medio: " << x << endl;
		x = (x * 40) / 100;
		cout << "40 % de Credito: " << x << endl;
	} 

	system("PAUSE");
	return 0;
}