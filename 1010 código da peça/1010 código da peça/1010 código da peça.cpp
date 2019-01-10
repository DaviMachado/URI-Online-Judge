#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	
	int a = 0, b = 0, d = 0, e = 0;
	double c = 0, f = 0, g = 0;
	cin >> a, cin >> b, cin >> c;
	cin >> d, cin >> e, cin >> f;
	c = c*b;
	f = f*e;
	g = c + f;
	
	cout << "VALOR A PAGAR: R$ " << g << endl;
	
	system("PAUSE");
	return 0;
}