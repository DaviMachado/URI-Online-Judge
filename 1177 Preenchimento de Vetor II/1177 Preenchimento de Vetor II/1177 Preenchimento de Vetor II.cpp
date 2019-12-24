#include<iostream>
using namespace std;
int main()
{
	int n[1000], i = 0, j, a, aux = 0;
	cin >> a;

	for (j = 0; j < 1000; j++)
	{
		if (aux < a)
		{
			n[i] = aux;
			cout << "N[" << j << "] = " << n[i] << endl;
			aux += 1;
		}
		if (aux >= a)
		{
			aux = 0;
		}
	}

	system("PAUSE");
	return 0;
}