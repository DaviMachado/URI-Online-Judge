#include<iostream>
using namespace std;

int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	cin >> A >> B;
	C = A;
	D = B;
	if (A < B)
	{
		A = D;
		B = C;
	}
	if (A % B == 0)
	{
		cout << "Sao Multiplos" << endl;
	}
	else
	{
		cout << "Nao sao Multiplos" << endl;
	}

	system("PAUSE");
	return 0;
}