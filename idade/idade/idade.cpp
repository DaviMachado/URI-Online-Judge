#include<iostream>
using namespace std;

int main()
{
	int a = 0, anos = 0, meses = 0, dias = 0;
	cin >> a;
	anos = a / 365;
	meses = a / 30;
	dias = a;
	cout <<"anos "<< anos << endl;
	cout <<"meses "<< meses << endl;
	cout <<"dias "<< dias << endl;

	system("PAUSE");
	return 0;
}