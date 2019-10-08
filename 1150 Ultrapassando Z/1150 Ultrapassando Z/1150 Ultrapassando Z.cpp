#include<iostream>
using namespace std;
int main()
{
	int x, z, i, aux = 1, aux2 = 0;
	cin >> x;
	cin >> z;
	
	while (z <= x)
	{
		cin >> z;
	}

	aux2 = x;

	while (aux2 <= z)
	{
		aux2 = aux2 + (x + 1);
		x = x + 1;
		aux = aux + 1;
	}

	cout << aux << endl;

	system("PAUSE");
	return 0;
}