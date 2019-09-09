#include<iostream>
using namespace std;
int main()
{
	int x, i, n = 1;
	cin >> x;

	for (i = 0; i < x; i++)
	{
		cout << n << " " << n + 1 << " " << n + 2 << " PUM" << endl;
		n = n + 4;
	}

	system("PAUSE");
	return 0;
}