#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, i, p = 0;
	
	for (i = 1; i <= 100; i++)
	{
		cin >> a;
		if (a > b)
		{
			b = a;
			p = i;
		}		
	}
	
	cout << b << endl;
	cout << p << endl;

	system("PAUSE");
	return 0;
}