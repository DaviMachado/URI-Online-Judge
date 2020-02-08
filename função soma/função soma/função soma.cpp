#include<iostream>
using namespace std;

int soma(int a, int b)
{
	while (a <= 0)
	{
		cout << "Digite Novamente: " << endl;
		cin >> a;
	}
	while (b <= 0)
	{
		cout << "Digite Novamente: " << endl;
		cin >> b;
	}
	a = a + b;
	return (a);
}

int main()
{
	int a = 0, b = 0;
	cin >> a;
	cin >> b;
	a = soma(a, b);
	cout << a << endl;

	system("PAUSE");
	return 0;
}