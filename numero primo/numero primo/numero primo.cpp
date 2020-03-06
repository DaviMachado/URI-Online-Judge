#include<iostream>
using namespace std;
int main()
{
	int num = 0, cont = 2, primo = 1;
	cin >> num;
	while (num <= 0)
	{
		cout << "Digite Novamente: " << endl;
		cin >> num;
	}
	while (cont < num)
	{
		if (num % cont == 0)
		{
			primo = 0;
		}
		cont++;
	}
	if (primo == 1)
		cout << "eh primo" << endl;
	else
		cout << "Nao eh primo" << endl;

	system("PAUSE");
	return 0;
}