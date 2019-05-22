#include<iostream>
#include<string>
using namespace std;
int main()
{
	int d1, d2, h, h2, m, m2, s, s2, r, r2, r3, r4;
	char ch;
	string dia;
	

	cin >> dia >> d1;
	cin >> h >> ch >> m >> ch >> s;
	cin >> dia >> d2;
	cin >> h2 >> ch >> m2 >> ch >> s2;

	if ((d1 == d2) && (h == h2) && (m == m2) && (s == s2))
	{
		cout << "0 dia(s)" << endl;
		cout << "0 hora(s)" << endl;
		cout << "1 minuto(s)" << endl;
		cout << "0 segundo(s)" << endl;
	}
	
	else
	{
		r = (30 - d1 + d2);
		if (r >= 30)
		{
			r = abs(30 - (30 - d1 + d2));
			if (r > 1)
			{
				r = r - 1;
			}
		}

		r2 = (24 - h + h2);
		if (r2 >= 24)
		{
			r2 = abs(24 - (24 - h + h2));
		}

		r3 = (60 - m + m2);
		if (r3 >= 60)
		{
			r3 = abs(60 - (60 - m + m2));
		}

		r4 = (60 - s + s2);
		if (r4 >= 60)
		{
			r4 = abs(60 - (60 - s + s2));
		}

		cout << r << " dia(s)" << endl;
		cout << r2 << " hora(s)" << endl;
		cout << r3 << " minuto(s)" << endl;
		cout << r4 << " segundo(s)" << endl;
	}
	
	system("PAUSE");
	return 0;
}