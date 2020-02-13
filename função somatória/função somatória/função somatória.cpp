#include<iostream>
using namespace std;
int soma(int atual,int soma2)
{
	while (atual <= 0)
	{
		cout << "Digite Novamente: " << endl;
		cin >> atual;
	}
	while (atual >= 1)
	{
		atual = (atual-1) + (atual - 2);
		soma2 = soma2 + atual;
	}
	return(soma2);
}

int main()
{
	int atual = 0, soma2 = 0;
	cin >> atual;
	atual = soma(atual,soma2);

	cout << atual << endl;

	system("PAUSE");
	return 0;
}