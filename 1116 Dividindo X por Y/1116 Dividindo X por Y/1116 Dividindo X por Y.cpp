#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x, i;
	float a = 0, b = 0;
	cin >> x;
	cout << fixed << setprecision(1);

	for (i = 0; i < x; i++)
	{
		cin >> a >> b;
		if (b != 0)
		{
			a = a / b;
			cout << a << endl;
		}
		else
		{
			cout << "divisao impossivel" << endl;
		}
	}

	system("PAUSE");
	return 0;
}