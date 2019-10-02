#include<iostream>
using namespace std;
int main()
{
	int a, n, i, soma = 0;
	cin >> a >> n;

	while (n <= 0)
	{
		cin >> n;
	}

	for (i = a; i < (a + n); i++)
	{
		soma = soma + i;
	}

	cout << soma << endl;

	system("PAUSE");
	return 0;
}