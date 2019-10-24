#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x = 0, s = 1, i;
	cout << fixed << setprecision(2);

	for (i = 2; i <= 100; i++)
	{
		s = s + 1 / i;
	}
	cout << s << endl;

	system("PAUSE");
	return 0;
}