#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "Ho";
		if (i < n)
		{
			cout << " ";
		}
		else
		{
			cout << "!" << endl;
		}
	}

	system("PAUSE");
	return 0;
}