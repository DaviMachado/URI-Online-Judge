#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double s = 1, i, j = 2;
	cout << fixed << setprecision(2);

	for (i = 3; i <= 39; i += 2)
	{
		s = s + i / j;
		j = j * 2;
	}

	cout << s << endl;

	system("PAUSE");
	return 0;
}