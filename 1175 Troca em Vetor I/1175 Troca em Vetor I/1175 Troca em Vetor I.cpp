#include<iostream>
using namespace std;
int main()
{
	int vet[20], vetb[20], i, j;

	for (i = 0; i < 20; i++)
	{
		cin >> vet[i];
	}

	for (i = 0, j = 19; i < 20; i++, j--)
	{
		vetb[j] = vet[i];
	}

	for (j = 0; j < 20; j++)
	{
		cout << "N[" << j << "] = " << vetb[j] << endl;
	}

	system("PAUSE");
	return 0;
}