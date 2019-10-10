#include<iostream>
using namespace std;
int main()
{
	int anterior = 0, atual = 1, prox = 0, n, i;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		if ((i == 0) || (i == 1))
		{
			cout << i << " ";
		}
		else if (i == n - 1)
		{
			prox = anterior + atual;
			anterior = atual;
			atual = prox;
			cout << prox << endl;
		}
		else
		{
			prox = anterior + atual;
			anterior = atual;
			atual = prox;
			cout << prox << " ";
		}
	}

	system("PAUSE");
	return 0;
}