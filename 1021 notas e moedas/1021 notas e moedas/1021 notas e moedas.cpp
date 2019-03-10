#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	double b = 0, c = 0;
	cin >> b;
	a = b;
	cout << "NOTAS:" << endl;
	cout << a / 100 << " nota(s) de R$ 100.00" << endl;
	cout << (a % 100) / 50 << " nota(s) de R$ 50.00" << endl;
	cout << ((a % 100) % 50) / 20 << " nota(s) de R$ 20.00" << endl;
	cout << (((a % 100) % 50) % 20) / 10 << " nota(s) de R$ 10.00" << endl;
	cout << ((((a % 100) % 50) % 20) % 10) / 5 << " nota(s) de R$ 5.00" << endl;
	cout << (((((a % 100) % 50) % 20) % 10) % 5) / 2 << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << ((((((a % 100) % 50) % 20) % 10) % 5) % 2) / 1 << " moeda(s) de R$ 1.00" << endl;
	c = b - int(b);  //subtrai a variavel "b" ponto flutuante com a variavel "b" inteira, para pegar só as "moedas".
	a = c * 100;  //multipliquei a variavel que tinha só as "moedas" por 100, para ela voltar ser uma variavel inteira, para voltar a utilizar o % (que serve só para inteiro).
	cout << a / 50 << " moeda(s) de R$ 0.50" << endl;
	cout << (a % 50) / 25 << " moeda(s) de R$ 0.25" << endl;
	cout << ((a % 50) % 25) / 10 << " moeda(s) de R$ 0.10" << endl;
	cout << (((a % 50) % 25) % 10) / 5 << " moeda(s) de R$ 0.05" << endl;
	cout << ((((a % 50) % 25) % 10) % 5) / 1 << " moeda(s) de R$ 0.01" << endl;

	system("PAUSE");
	return 0;
}