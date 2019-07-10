#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, i, c = 0, r = 0, s = 0, t = 0;
	double c2 = 0, r2 = 0, s2 = 0;
	double pc = 0, pr = 0, ps = 0;
	string x;

	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> b >> x;
		if (x == "C")
		{
			c = c + b;
			t = t + b;
		}

		else if (x == "R")
		{
			r = r + b;
			t = t + b;
		}

		else if (x == "S")
		{
			s = s + b;
			t = t + b;
		}
	}

	c2 = c;
	r2 = r;
	s2 = s;

	pc = (c2 * 100) / t;
	pr = (r2 * 100) / t;
	ps = (s2 * 100) / t;

	cout << "Total: " << t << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << pc << " %" << endl;
	cout << "Percentual de ratos: " << pr << " %" << endl;
	cout << "Percentual de sapos: " << ps << " %" << endl;

	system("PAUSE");
	return 0;
}