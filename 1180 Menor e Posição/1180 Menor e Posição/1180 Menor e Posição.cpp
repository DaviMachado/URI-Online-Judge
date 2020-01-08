#include<iostream>
using namespace std;
int main()
{
	int vet[1000], vetb[1000], i, a, aux = 0, menor = 0, pos = 0;
	bool troca = true;
	cin >> a;

	for (i = 0; i < a; i++)
	{
		cin >> vet[i];
		vetb[i] = vet[i];
	}

	while (troca)
	{
		troca = false;
		for (i = 0; i < (a - 1); i++)
		{
			if (vet[i] > vet[i + 1])
			{
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
				troca = true;
			}
		}
	}

	menor = vet[0];

	for (i = 0; i < a; i++)
	{
		if (vet[0] == vetb[i])
		{
			pos = i;
		}
	}

	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;
	
	system("PAUSE");
	return 0;
}