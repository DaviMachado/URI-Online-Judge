#include<iostream>
using namespace std;

int main()
{
	int a = 0, ano = 0, mes = 0, dias = 0;
	cin >> a;
	ano = a / 365;
	mes = (a % 365) / 30;
	dias = (a % 365) % 30;

	cout << ano << " ano(s)" << endl;
	cout << mes << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;

	system("PAUSE");
	return 0;
}