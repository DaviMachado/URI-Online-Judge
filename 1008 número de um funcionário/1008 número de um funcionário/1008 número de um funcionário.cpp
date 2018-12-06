#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	double valor = 0;
	int numero = 0, horas = 0;

	cin >> numero;
	cin >> horas;
	cin >> valor;

	cout << "NUMBER = " << numero << endl;
	cout << "SALARY = U$ " << horas*valor << endl;

	return 0;
}
