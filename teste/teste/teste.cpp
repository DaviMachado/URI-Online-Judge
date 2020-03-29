#include <iostream>
using namespace std;
int main()
{
	int num, aux = 0;
	cin >> num;

	if (num > 0)
	{
		do
		{
			aux = num % 10;
			cout << aux;
			num /= 10;
		} while (num != 0);
		cout << endl;
	}

	else if (num < 0)
	{
		num *= -1;
		cout << "-";
		do
		{
			aux = num % 10;
			cout << aux;
			num /= 10;
		} while (num != 0);
		cout << endl;
	}

	else
	{
		cout << "0" << endl;
	}

	system("PAUSE");
	return 0;
}