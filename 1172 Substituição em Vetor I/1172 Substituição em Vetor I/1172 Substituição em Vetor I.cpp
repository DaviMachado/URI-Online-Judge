#include<iostream>
using namespace std;
int main()
{
	int x[10], i = 0, j = 0, aux = 0;

	for (j = 0; j < 10; j++)
	{
		cin >> x[i];
		if (x[i] <= 0)
		{
			x[i] = 1;
		}
		cout << "X[" << aux << "] = " << x[i] << endl;
		aux += 1;
	}

	system("PAUSE");
	return 0;
}