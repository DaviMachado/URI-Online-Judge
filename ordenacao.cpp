#include <iostream>
using namespace std;

int main(){
	int vet[3];		// vetor para guardar os n�meros
	int aux;		// variavel para ajudar na troca de posi��es
	bool trocou = true;		// variavel para saber se houve alguma troca
	for (int i = 0; i < 3; i++)		// for para insirir todos os n�meros no vetor
		cin >> vet[i];		// por ter somente uma linha, n�o precisa abrir/fechar chaves

	while (trocou){		// Enquanto houver troca ( true ) continuar rodando o vetor (por isso trocou come�ou como true)
		trocou = false;		// Troca para false para n�o dar looping infinito
		/*Bubble Sort:
			Ele vai comparando 2 por 2, ou seja:
				Quando i = 0
					Ele compara o indice 0 com o indice 1
				Quando i = 1
					Ele compara o indice 1 com o indice 2
				E assim por diante...
			Aqui, o for tem que ser < 2, pois, por ser um vetor de 3, ele tem os seguinte indices: 0, 1, 2
			E j� que o Bubble Sort olha 2 por 2, se vc colocar um for < 3, no INDICE I = 2, ele ira compara 2 com 3
			E nesse vetor N�O EXISTE o indice 3! (nesse caso existe somente indice at� 2)*/

		for (int i = 0; i < 2; i++){	// roda o vetor procurando as ordens
			if (vet[i] > vet[i + 1]){		// o n�mero atual � maior do que o pr�ximo?
				aux = vet[i];	// salva o valor do indice atual para n�o perder
				vet[i] = vet[i + 1];	// joga o valor do pr�ximo no indice atual
				vet[i + 1] = aux;	// joga o valor do indice atual no pr�ximo
				trocou = true;		// Avisa que houve troca de posi��es
			}
		}
		// Saiu do for!
		// Se houve alguma troca, trocou = true
		// Se n�o houve trocas, por causa do trocou = false, ele ainda vai ser FALSE, por isso vai sair do while
	}
	// O vetor esta em ordem, s� falta mostrar
	cout << "A: " << vet[0] << "\nB: " << vet[1] << "\nC: " << vet[2] << endl;
	system("pause");
	return 0;
}