#include<iostream>
using namespace std;
int main()
{
	int vet[2], mat[2][2], i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Digite " << i + 1 << " aluno: " << endl;
			cin >> mat[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		cout << vet[i];
	}


	system("PAUSE");
	return 0;
}