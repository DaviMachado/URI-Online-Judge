#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0, diferenca = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	diferenca = a*b - c*d;
	cout << "DIFERENCA = "<<diferenca << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}