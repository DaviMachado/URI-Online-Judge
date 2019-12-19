#include<iostream>
using namespace std;
int main()
{
	int a, n, ant = 0, atual = 1, prox = 0, i, j;
	long long int vet[61];
	vet[0] = 0;
	vet[1] = 1;

	cin >> a;

	for (i = 0; i < a; i++)
	{
		cin >> n;
		for (j = 2; j < n; j++)
		{
			prox = ant + atual;
			ant = atual;
			atual = prox;
			vet[j] = prox;
		}
		cout << "Fib(" << n << ") = " << vet[j] << endl;
		ant = 0;
		atual = 1;
		prox = 0;
	}

	system("PAUSE");
	return 0;
}