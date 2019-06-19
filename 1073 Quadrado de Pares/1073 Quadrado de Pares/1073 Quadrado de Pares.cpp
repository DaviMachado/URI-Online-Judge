#include<iostream>
using namespace std;
int main()
{
	int a = 0, i, aux = 1;
	cin >> a;

	for (i = 1; i < a; i+=2)
	{
		if (aux % 2 == 1)
		{
			aux = aux + 1;
		}
		if (aux % 2 == 0)
		{
			cout << aux << "^2 = " << aux*aux << endl;
			aux = aux + 1;
		}
	}

	system("PAUSE");
	return 0;
}