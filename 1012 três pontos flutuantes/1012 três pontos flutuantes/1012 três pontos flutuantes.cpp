#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(3);
	double a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, w = 0, v = 0;
	cin >> a >> b >> c;	
	x = a*c/2;
	y = c*c*3.14159;
	z = (a+b)*c/2;
	v = b*b;
	w = a*b;
	cout << "TRIANGULO: " << x << endl;
	cout << "CIRCULO: " << y << endl;
	cout << "TRAPEZIO: " << z << endl;
	cout << "QUADRADO: " << v << endl;
	cout << "RETANGULO: " << w << endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}