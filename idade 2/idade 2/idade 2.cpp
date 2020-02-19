#include<iostream>
using namespace std;

int main()
{
	int anos = 0, meses = 0, dias = 0, aux = 0;
	cin >> anos;
	cin >> meses;
	cin >> dias;
	aux = anos * 365;
	aux = aux + meses * 30;
	aux = aux + dias;
	cout << "dias " << aux << endl;
	

	system("PAUSE");
	return 0;
}