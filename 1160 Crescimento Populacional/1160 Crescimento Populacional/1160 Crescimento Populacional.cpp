#include<iostream>
using namespace std;
int main()
{
	int a, pa, pb, i, cont = 0;
	double g1 = 0, g2 = 0;

	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> pa >> pb >> g1 >> g2;
		while ((pa <= pb) && (cont <= 100))
		{
			pa += (pa*g1) / 100;
			pb += (pb*g2) / 100;
			cont += 1;
			if (cont > 100)
			{
				cout << "Mais de 1 seculo." << endl;
				break;
			}
			else if (pa > pb)
			{
				cout << cont << " anos." << endl;
			}
		}
		cont = 0;
	}

	system("PAUSE");
	return 0;
}