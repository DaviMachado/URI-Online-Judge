#include<iostream>
using namespace std;
int main()
{
	int a, b, c = 0, i;
	cin >> a;
	cin >> b;

	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}

	for (i = a+1; i < b; i++)
	{
		if ((i % 5 == 2) || (i % 5 == 3))
		{
			cout << i << endl;
		}
	}

	system("PAUSE");
	return 0;
}