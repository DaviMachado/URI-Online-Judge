#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	cout << fixed << setprecision(3);
	int a = 0;
	double b = 0;
	cin >> a;
	b = (4.0 / 3)*3.14159*pow(a,3);
	cout << "VOLUME = " << b << endl;
	
	system("PAUSE");
	return 0;
}