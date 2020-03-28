#include<iostream>
using namespace std;
int main()
{
	int vet[10], mat[10][10], i, j;
	for (i = 0; i <= 9; i++)
	{
		do
		{
			cout << "Digite o "<<i+1<<" valor: " << endl;
			cin >> vet[i];

		} while ((vet[i] <= 0) || (vet[i] > 10));
	}

	for (i = 0; i <=9; i++)
	{
		for (j = 0; j <=9; j++)
		{
			mat[i][j] = vet[i] * (j + 1);
		}
	}
	cout << endl;
	for (i = 0; i <= 9; i++)
	{
		cout <<"  " << vet[i];
	}
	cout << endl;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			cout << "  " << mat[i][j];

		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}