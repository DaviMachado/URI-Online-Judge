#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(3);
	int x = 0, y = 0;
	double z = 0;
	cin >> x;
	cin >> y;
	z = (double)(y * x)/12;
	cout << z << endl;

	system("PAUSE");
	return 0;
}