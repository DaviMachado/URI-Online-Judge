#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a;
	cin >> b;
	
	while (a == b)
	{
		cout << "Valores iguais" << endl;
		cout << "Digite novamente" << endl;
		cin >> a;
		cin >> b;
	}
	if (a < b)
	{
		cout << a << " " << b << endl;
		cout << b << " " << a << endl;
	}
	else
	{
		cout << b << " " << a << endl;
		cout << a << " " << b << endl;
	}
	system("PAUSE");
	return 0;
}