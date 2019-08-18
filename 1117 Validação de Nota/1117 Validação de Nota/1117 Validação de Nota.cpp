#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	double a = 0, b = 0, r = 0;
	cout << fixed << setprecision(2);

	cin >> a;
	while ( (a < 0) || (a > 10) )
	{
		cout << "nota invalida" << endl;
		cin >> a;
	}

	cin >> b;
	while ( (b < 0) || (b > 10) )
	{
		cout << "nota invalida" << endl;
		cin >> b;
	}

	r = (a + b) / 2;
	cout << "media = " << r << endl;

	system("PAUSE");
	return 0;
}