#include <iostream>
using namespace std;

int main(){
	// Criar as v�riaveis necess�rias
	double a = 0, b = 0, resultado = 0;
	// a tem peso de 3.5
	// b tem peso de 7.5
	cin >> a;
	cin >> b;
	// Vamos somar as notas com seus pesos
	resultado = (a*3.5) + (b*7.5);
	// dividir pela soma dos pesos
	resultado = resultado / 11;
	// printf("TEXTO  %.5f", vari�vel)
	// % = exibir uma vari�vel aqui
	// .5 = n�mero de casas decimais ap�s a virgula
	// f = tipo da vari�vel ( f = float, d = inteira )
	printf("MEDIA = %.5f\n", resultado);
	return 0;
}