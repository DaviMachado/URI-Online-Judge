#include<iostream>
using namespace std;

int main()
{
	int hora, minuto, segundo, n;
	cin >> n;
	segundo = n % 60; //pega o resto da divisão
	minuto = n / 60;  
	hora = minuto / 60;
	minuto = minuto % 60;  //pega o resto da divisão de minutos
	cout << hora << ":" << minuto << ":" << segundo << endl;
	
	system("PAUSE");
	return 0;
}