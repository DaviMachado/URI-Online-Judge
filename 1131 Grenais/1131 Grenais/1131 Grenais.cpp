#include<iostream>
using namespace std;
int main()
{
	int i = 0, g = 0, a = 0, in = 0, gr = 0, em = 0, aux = 0;
	cin >> i >> g;

	if (i > g)
	{
		in = 1;
	}
	if (g > i)
	{
		gr = 1;
	}
	if (i == g)
	{
		em = 1;
	}

	cout << "Novo grenal (1-sim 2-nao)" << endl;
	aux = aux + 1;

	cin >> a;

	while (a == 1)
	{
		cin >> i >> g;
		if (i > g)
		{
			in = in + 1;
		}
		if (g > i)
		{
			gr = gr + 1;
		}
		if (i == g)
		{
			em = em + 1;
		}
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		aux = aux + 1;
		cin >> a;
	}

	if (in > gr)
	{
		cout << aux << " grenais" << endl;
		cout << "Inter:" << in << endl;
		cout << "Gremio:" << gr << endl;
		cout << "Empates:" << em << endl;
		cout << "Inter venceu mais" << endl;
	}
	if (gr > in)
	{
		cout << aux << " grenais" << endl;
		cout << "Inter:" << in << endl;
		cout << "Gremio:" << gr << endl;
		cout << "Empates:" << em << endl;
		cout << "Gremio venceu mais" << endl;
	}
	if (in == gr)
	{
		cout << aux << " grenais" << endl;
		cout << "Inter:" << in << endl;
		cout << "Gremio:" << gr << endl;
		cout << "Empates:" << em << endl;
		cout << "Nao houve vencedor" << endl;
	}

	system("PAUSE");
	return 0;
}