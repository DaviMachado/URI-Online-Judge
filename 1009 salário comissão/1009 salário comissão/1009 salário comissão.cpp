#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	double a = 0, b = 0;
	string name;

	cin >> name;
	cin >> a;
	cin >> b;
	b = (b * 15) / 100;
	a = a + b;

	cout << "TOTAL = R$ " << a << endl;

	system("PAUSE");
	return 0;
}