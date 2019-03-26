#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0, d = 0, e = 0;
	cout << fixed << setprecision(1);
	cin >> a >> b >> c >> d;
	a = a * 2;
	b = b * 3;
	c = c * 4;
	d = d * 1;
	a = (a + b + c + d) / 10;
	
	cout << "Media: " << a << endl;

	if (a >= 7.0)
	{
		cout << "Aluno aprovado." << endl;
	}
	if (a < 5.0)
	{
		cout << "Aluno reprovado." << endl;
	}
	if (a >= 5.0)
	{
		if (a <= 6.9)
		{
			cout << "Aluno em exame." << endl;
			cin >> e;
			cout << "Nota do exame: " << e << endl;
			a = (a + e) / 2;
			if (a >= 5.0)
			{
				cout << "Aluno aprovado." << endl;
				cout << "Media final: " << a << endl;
			}
			else
			{
				cout << "Aluno reprovado." << endl;
				cout << "Media final: " << a << endl;
			}
		}
	}

	system("PAUSE");
	return 0;
}