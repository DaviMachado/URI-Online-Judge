#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0, p = 0, A = 0;
	cout << fixed << setprecision(1);
	cin >> a >> b >> c;
	if ((a < b + c) && (b < a + c) && (c < a + b))  /*Para saber se forma um triangulo, cada lado � menor do que a soma dos outros dois*/
	{
		p = a + b + c;    /*Para calcular o per�metro de um tri�ngulo basta somar o valor dos lados dele.*/
		cout << "Perimetro = " << p << endl;  
	}
	else
	{
		A = ((a + b)*c) / 2;                //Para calcular �rea do trap�zio:
		cout << "Area = " << A << endl;      //1� passo : somar as bases.
	}                                        //2� passo: multiplicar o resultado da soma das bases pela altura do trap�zio.
	                                         //3� passo: dividir o resultado da multiplica��o por dois. 

	system("PAUSE");
	return 0;
}