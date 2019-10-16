#include<iostream>
using namespace std;
int main()
{
	int fat = 1, a = 0;
	cin >> a;
	
	while (a>0)
	{
		fat = fat*a;
		a--;
	}
	cout << fat << endl;

	system("PAUSE");
	return 0;
}