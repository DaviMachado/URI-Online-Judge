#include<iostream>
using namespace std;
int main()
{
	int a = 0, i;
	cin >> a;

	for (i = 1; i < 10000; i++)
	{
		if (i % a == 2)
		{
			cout << i << endl;
		}
	}

	system("PAUSE");
	return 0;
}