#include<iostream>
using namespace std;
int main()
{
	int mat[2][2], vet[2], i, j, n;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << "Digite a " << i + 1 << " linha e " << j + 1 << " coluna: ";
			cin >> mat[i][j];
		}
		vet[i] = mat[i][i];
	}
	cout << endl;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << "\t" << mat[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (n = 0; n <= 1; n++)
	{
		cout << "\t" << vet[n];
	}
	cout << endl;
	system("PAUSE");
	return 0;
}