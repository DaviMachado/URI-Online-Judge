#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	cout << a << endl;
	cout << a / 100 << " nota(s) de R$ 100,00" << endl;
	cout << (a % 100) / 50 << " nota(s) de R$ 50,00" << endl;
	cout << ((a % 100) % 50) / 20 << " nota(s) de R$ 20,00" << endl;
	cout << (((a % 100) % 50) % 20) / 10 << " nota(s) de R$ 10,00" << endl;
	cout << ((((a % 100) % 50) % 20) % 10) / 5 << " nota(s) de R$ 5,00" << endl;
	cout << (((((a % 100) % 50) % 20) % 10) % 5) / 2 << " nota(s) de R$ 2,00" << endl;
	cout << ((((((a % 100) % 50) % 20) % 10) % 5) % 2) / 1 << " nota(s) de R$ 1,00" << endl;
	
	system("PAUSE");
	return 0;
}