#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i = 0, j, x;
	double n[100], a;
	cout << fixed << setprecision(4);
	cin >> a;

	for (j = 0; j < 100; j++)
	{
		n[i] = a;
		cout << "N[" << j << "] = " << n[i] << endl;
		a = a / 2;
	}

	system("PAUSE");
	return 0;
}