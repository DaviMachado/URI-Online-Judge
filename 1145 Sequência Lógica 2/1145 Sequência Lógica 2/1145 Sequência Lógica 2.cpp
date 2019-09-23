#include<iostream>
using namespace std;
int main()
{
	int x, y, i, aux = 1;
	cin >> x >> y;

	for (i = 1; i <= y; i++)
	{
		cout << i;
		if (aux < x)
		{
			
			cout << " ";
			aux = aux + 1;
		}
		else
		{
			cout << endl;
			aux = 1;
		}
	}

	system("PAUSE");
	return 0;
}