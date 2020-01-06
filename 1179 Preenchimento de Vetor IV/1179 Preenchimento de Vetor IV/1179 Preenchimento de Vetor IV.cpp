#include<iostream>
using namespace std;
int main()
{
	int par[5], imp[5], vet[15], i = 0, j = 0, k = 0, aux = 0, aux2 = 0;
	
	for (i = 0; i < 15; i++)
	{
		cin >> vet[i];

		if (vet[i] % 2 == 0)
		{
			par[j] = vet[i];
			j++;
			aux += 1;
			if (j == 5)
			{
				for (j = 0; j < 5; j++)
				{
					cout << "par[" << j << "] = " << par[j] << endl;
				}
				j = 0;
				aux = 0;
			}
		}

		else
		{
			imp[k] = vet[i];
			k++;
			aux2 += 1;
			if (k == 5)
			{
				for (k = 0; k < 5; k++)
				{
					cout << "impar[" << k << "] = " << imp[k] << endl;
				}
				k = 0;
				aux2 = 0;
			}
		}
	}

	for (k = 0; k < aux2; k++)
	{
		cout << "impar[" << k << "] = " << imp[k] << endl;
	}
	for (j = 0; j < aux; j++)
	{
		cout << "par[" << j << "] = " << par[j] << endl;
	}

	system("PAUSE");
	return 0;
}