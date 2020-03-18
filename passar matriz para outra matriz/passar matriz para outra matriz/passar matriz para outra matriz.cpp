#include <iostream>
using namespace std;
int main()
{
	int mata[2][2], matb[2][2], i, j;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << "\necreva na " << i + 1 << " linha " << j + 1 << " coluna ";
			cin >> mata[i][j];
			matb[i][j] = mata[i][j];
		}
	}
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << "\t" << mata[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << "\t" << matb[i][j];
		}
		cout << endl;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}