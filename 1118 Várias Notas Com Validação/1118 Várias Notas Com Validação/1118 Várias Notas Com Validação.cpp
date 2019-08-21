#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x = 1;
	double a = 0, b = 0, r = 0;
	cout << fixed << setprecision(2);

	while (x == 1)
	{
		cin >> a;
		while ((a < 0) || (a > 10))
		{
			cout << "nota invalida" << endl;
			cin >> a;
		}

		cin >> b;
		while ((b < 0) || (b > 10))
		{
			cout << "nota invalida" << endl;
			cin >> b;
		}

		r = (a + b) / 2;
		cout << "media = " << r << endl;
		r = 0;
		cout << "novo calculo (1-sim 2-nao)" << endl;
		
		cin >> x;
		while ( (x != 1) && (x != 2) )
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> x;
		}
	}

	system("PAUSE");
	return 0;
}