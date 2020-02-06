using namespace std;
#include <iostream>

int fibo(int i);
// Calcula o valor do 
// i-ésimo elemento da 
// série de Fibonacci. 
int main()
{
	int n, resp;
	cout << "Digite um numero: + <Enter>: ";
	cin >> n;
	resp = fibo(n);
	cout << "\nElemento " << n << " na serie Fibonacci = " << resp << endl;
	system("PAUSE");
	return 0;
}
// Definição.
int fibo(int i)
// Calcula o valor do 
// i-ésimo elemento da
// série de Fibonacci. 
{
	cout << "\nProcessando fibo(" << i << ")...";
	if (i < 3)
	{
		cout << "Retornando 1...\n";
		return 1;
	}
	else
	{
		cout << "Chamando fibo(" << i - 2 << ") e fibo(" << i - 1 << ").\n";
		return(fibo(i - 2) + fibo(i - 1));
	}
}