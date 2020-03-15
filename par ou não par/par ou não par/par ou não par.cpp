#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a;
	while (a <= 0)
	{
		cout << "Digite novamente" << endl;
		cin >> a;
	}
	if (a % 2 == 1)
		cout << "Nao par " << a << endl;
	else
		cout << "Par " << a << endl;


	system("PAUSE");
	return 0;
}