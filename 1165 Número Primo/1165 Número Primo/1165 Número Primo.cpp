#include<iostream>
using namespace std;
int main()
{
	int num = 0, cont = 2, primo = 1, x, i;
	cin >> x;

	for (i = 0; i < x; i++)
	{
		cin >> num;
		while (cont < num)
		{
			if (num % cont == 0)
			{
				primo = 0;
			}
			cont++;
		}
		if (primo == 1)
		{
			cout << num << " eh primo" << endl;
		}
		else
		{
			cout << num << " nao eh primo" << endl;
		}
		cont = 2;
		primo = 1;
	}

	system("PAUSE");
	return 0;
}