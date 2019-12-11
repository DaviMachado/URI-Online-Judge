#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i = 0, j;
	double a[100];
	cout << fixed << setprecision(1);

	for (j = 0; j < 100; j++)
	{
		cin >> a[i];
		if (a[i] <= 10)
		{
			cout << "A[" << j << "] = " << a[i] << endl;
		}
	}

	system("PAUSE");
	return 0;
}