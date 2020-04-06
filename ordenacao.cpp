#include <iostream>
using namespace std;

int main(){
	int vet[3];		// vetor para guardar os números
	int aux;		// variavel para ajudar na troca de posições
	bool trocou = true;		// variavel para saber se houve alguma troca
	for (int i = 0; i < 3; i++)		// for para insirir todos os números no vetor
		cin >> vet[i];		// por ter somente uma linha, não precisa abrir/fechar chaves

	while (trocou){		// Enquanto houver troca ( true ) continuar rodando o vetor (por isso trocou começou como true)
		trocou = false;		// Troca para false para não dar looping infinito
		/*Bubble Sort:
			Ele vai comparando 2 por 2, ou seja:
				Quando i = 0
					Ele compara o indice 0 com o indice 1
				Quando i = 1
					Ele compara o indice 1 com o indice 2
				E assim por diante...
			Aqui, o for tem que ser < 2, pois, por ser um vetor de 3, ele tem os seguinte indices: 0, 1, 2
			E já que o Bubble Sort olha 2 por 2, se vc colocar um for < 3, no INDICE I = 2, ele ira compara 2 com 3
			E nesse vetor NÃO EXISTE o indice 3! (nesse caso existe somente indice até 2)*/

		for (int i = 0; i < 2; i++){	// roda o vetor procurando as ordens
			if (vet[i] > vet[i + 1]){		// o número atual é maior do que o próximo?
				aux = vet[i];	// salva o valor do indice atual para não perder
				vet[i] = vet[i + 1];	// joga o valor do próximo no indice atual
				vet[i + 1] = aux;	// joga o valor do indice atual no próximo
				trocou = true;		// Avisa que houve troca de posições
			}
		}
		// Saiu do for!
		// Se houve alguma troca, trocou = true
		// Se não houve trocas, por causa do trocou = false, ele ainda vai ser FALSE, por isso vai sair do while
	}
	// O vetor esta em ordem, só falta mostrar
	cout << "A: " << vet[0] << "\nB: " << vet[1] << "\nC: " << vet[2] << endl;
	system("pause");
	return 0;
}