#include<iostream>

using namespace std;

int main()
{
	int x, horas = 0, minutos = 0;

	cin >> x;
	
	minutos = x / 60;
	horas = minutos / 60;

	cout << "Horas " << horas << endl;
	cout << "Minutos " << minutos << endl;
	cout << "Segundos " << x << endl;

	system("PAUSE");
	return 0;
}