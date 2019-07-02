#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a = 0, i;
	double b = 0, c = 0, d = 0, r = 0;
	cin >> a;
	cout << fixed << setprecision(1);

	for (i = 0; i < a; i++)
	{
		cin >> b >> c >> d;
		r = ((b * 2) + (c * 3) + (d * 5)) / 10;
		cout << r << endl;
	}

	system("PAUSE");
	return 0;
}