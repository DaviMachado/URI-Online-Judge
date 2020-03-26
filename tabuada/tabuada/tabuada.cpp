#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, i;
	cin >> a;
	for (i = 0; i <= 10; i++)
	{
		b = a*i;
		cout << b << endl;
	}
	
	system("PAUSE");
	return 0;
}