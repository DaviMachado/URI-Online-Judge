#include<iostream>
using namespace std;
int main()
{
	int a = 0, i = 0;
	cin >> a;

	for (i = 0; i < 6; i++)
	{
		if (a % 2 == 0)
		{
			a = a + 1;
		}
		if (a % 2 == 1)
		{
			cout << a << endl;
			a = a + 2;
		}
	}

	system("PAUSE");
	return 0;
}