#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(3);
	int x = 0;
	double y = 0;
	
	cin >> x;
	cin >> y;
	y = x/y;
	cout << y << " km/l" << endl;
	
	system("PAUSE");
	return 0;
}