#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	double a, b, c, delta, r1, r2;
	cout << fixed << setprecision(5);
	cin >> a >> b >> c;
	if (a && b && c > 0) 
	{
		delta = (pow(b, 2) - 4 * a*c);       /*pow: ele faz o numero elevado em quantos vc quiser. exemplo: pow(3,2),*/ 
	}									     /*ele ta elevando o 3 ao quadrado, pow(3, 3), ao cubo, e assim por dinte.*/
	if (delta>0)
	{
		r1 = ((-b + sqrt(delta)) / (2 * a));    /*sqrt: ele faz a raiz quadrada de um numero, exemplo: sqrt(4),*/
		r2 = ((-b - sqrt(delta)) / (2 * a));    /*ele vai mostrar (2), sqrt(9), ira mostrar (3).*/
		cout << "R1 = " << r1 << endl;
		cout << "R2 = " << r2 << endl;
	}
	else
	{
		cout << "Impossivel calcular" << endl;
	}
	
	system("PAUSE");
	return 0;
}