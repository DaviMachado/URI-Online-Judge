#include<iostream>
using namespace std;
int main()
{
	int x, i, a = 1;
	cin >> x;

	for (i = 0; i < (x * 2); i+=2)
	{
		cout << a << " " << a*a << " " << a*a*a << endl;
		cout << a << " " << a*a + 1 << " " << a*a*a + 1 << endl;
		a = a + 1;
	}

	system("PAUSE");
	return 0;
}