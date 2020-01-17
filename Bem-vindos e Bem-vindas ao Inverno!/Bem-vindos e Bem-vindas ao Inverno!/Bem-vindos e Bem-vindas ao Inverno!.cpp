#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	//1
	if ((a > b) && (c >= b))
	{
		cout << ":)" << endl;
	}
	//2
	else if ((b > a) && (b >= c))
	{
		cout << ":(" << endl;
	}
	//3
	else if ((a < b && b < c) && (b - a > c - b))
	{
		cout << ":(" << endl;
	}
	//4
	else if ((a < b && b < c) && (c - b > b - a))
	{
		cout << ":)" << endl;
	}
	//5
	else if ((a > b && b > c) && (a - b > b - c))
	{
		cout << ":)" << endl;
	}
	//6
	else if ((a > b && b > c) && (b - c > a - b))
	{
		cout << ":(" << endl;
	}
	//7
	else if ((a == b) && (b < c))
	{
		cout << ":)" << endl;
	}
	//8
	else if ((a == b) && (c < b))
	{
		cout << ":(" << endl;
	}
	
	system("PAUSE");
	return 0;
}