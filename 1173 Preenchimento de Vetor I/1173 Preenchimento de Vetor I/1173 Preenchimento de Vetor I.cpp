#include<iostream>
using namespace std;
int main()
{
	int a, n[10], i=0, j;
	cin >> a;

	for (j = 0; j < 10; j++)
	{
		n[i] = a;
		cout << "N[" << j << "] = " << n[i] << endl;
		a = a * 2;
	}

	system("PAUSE");
	return 0;
}