#include<iostream>
using namespace std;

int main()
{
	int a = 0, i;
	cin >> a;
	for (i = 0; i <= a; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << endl;
		}
	}

	system("PAUSE");
	return 0;
}