#include <iostream>
using namespace std;

int main(){
	// Criar as váriaveis necessárias
	double a = 0, b = 0, resultado = 0;
	// a tem peso de 3.5
	// b tem peso de 7.5
	cin >> a;
	cin >> b;
	// Vamos somar as notas com seus pesos
	resultado = (a*3.5) + (b*7.5);
	// dividir pela soma dos pesos
	resultado = resultado / 11;
	// printf("TEXTO  %.5f", variável)
	// % = exibir uma variável aqui
	// .5 = número de casas decimais após a virgula
	// f = tipo da variável ( f = float, d = inteira )
	printf("MEDIA = %.5f\n", resultado);
	return 0;
}