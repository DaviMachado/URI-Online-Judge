#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	double r = 0, idades = 0, aux = 0;
	cout << fixed << setprecision(2);
	cin >> x;

	while (x > 0)
	{
		idades = idades + x;
		aux = aux + 1;
		cin >> x;
	}
	
	r = idades / aux;
	cout << r << endl;

	system("PAUSE");
	return 0;
}