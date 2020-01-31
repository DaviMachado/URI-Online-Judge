#include<iostream>
using namespace std;

int main()
{
	int fat = 1, n = 0, cont;
	cin >> n;
	for (cont = 1; cont <= n; cont++)
	{
		fat = fat*cont;
	}
	cout << fat << endl;

	system("PAUSE");
	return 0;
}