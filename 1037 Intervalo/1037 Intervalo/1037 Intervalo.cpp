#include<iostream>
using namespace std;

int main()
{
	float a = 0;
	cin >> a;
	if (a < 0)
	{
		cout << "Fora de intervalo" << endl;
	}
	if (a>100)
	{
		cout << "Fora de intervalo" << endl;
	}
	if (a >= 0)
	{
		if (a <= 25)
		{
			cout << "Intervalo [0,25]" << endl;
		}
	}
	if (a > 25)
	{
		if (a <= 50)
		{
			cout << "Intervalo (25,50]" << endl;
		}
	}
	if (a > 50)
	{
		if (a <= 75)
		{
			cout << "Intervalo (50,75]" << endl;
		}
	}
	if (a > 75)
	{
		if (a <= 100)
		{
			cout << "Intervalo (75,100]" << endl;
		}
	}

	system("PAUSE");
	return 0;
}