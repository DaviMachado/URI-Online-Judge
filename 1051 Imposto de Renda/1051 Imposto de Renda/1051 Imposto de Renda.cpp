#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a = 0;
	cout << fixed << setprecision(2);
	cin >> a;

	if (a <= 2000)
	{
		cout << "Isento" << endl;
	}
	else if ((a > 2000) && (a <= 3000))
	{
		a = ((a - 2000) * 0.08);
		cout << "R$ " << a << endl;
	}
	else if ((a > 3000) && (a <= 4500))
	{
		a = (((a - 3000) * 0.18) + 80.00);
		cout << "R$ " << a << endl;
	}
	else if (a > 4500)
	{
		a = (((a - 4500) * 0.28) + 350.00);
		cout << "R$ " << a << endl;
	}

	system("PAUSE");
	return 0;
}