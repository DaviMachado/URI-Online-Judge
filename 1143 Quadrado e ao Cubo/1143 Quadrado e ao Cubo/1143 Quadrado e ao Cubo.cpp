#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i, aux = 1;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << aux << " " << pow(aux, 2) << " " << pow(aux, 3) << endl;
		aux = aux + 1;
	}

	system("PAUSE");
	return 0;
}