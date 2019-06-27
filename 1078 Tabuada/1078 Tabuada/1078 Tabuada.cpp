#include<iostream>
using namespace std;

int main()
{
	int a = 0, i, aux;
	cin >> a;
	for (i = 1; i <= 10;i++)
	{
		aux = i*a;
		cout << i << " x " << a << " = " << aux << endl;
	}

	system("PAUSE");
	return 0;
}