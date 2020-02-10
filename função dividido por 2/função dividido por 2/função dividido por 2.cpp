#include<iostream>
using namespace std;

int div(int a)
{
	while (a <= 0)
	{
	cout << "Digite Novamente: ";
	cin >> a; 
	cout << endl;
	}
	a = a / 2;
	return (a);
}

int main()
{
	int a = 0;
	cin >> a;
	cout << div(a) << endl;

	system("PAUSE");
	return 0;
}