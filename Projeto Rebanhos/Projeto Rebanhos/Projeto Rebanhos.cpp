#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;

void CadastraOvino(int Inicial, int Final, char TipoOvinos[50])
{

	if (Inicial == Final)
		cin >> TipoOvinos[Final];
	else
		CadastraOvino(Inicial + 1, Final, TipoOvinos);
	return;
}
void ListarOvinos(int Final, char TipoOvinos[50])
{

	for (int i = 0; i < Final; i++)
		cout << i + 1 << " - Tipo ovino: " << TipoOvinos[i] << endl;
	return;
}
void CadastraOrigem(int Inicial, int Final, char Origem[50])
{

	if (Inicial == Final)
		cin >> Origem[Final];
	else
		CadastraOrigem(Inicial + 1, Final, Origem);
	return;
}
void ListarOrigem(int Final, char Origem[50])
{

	for (int i = 0; i < Final; i++)
		cout << i + 1 << " - Origem: " << Origem[i] << endl;
	return;
}
void CadastraDestino(int Inicial, int Final, char Destino[50])
{

	if (Inicial == Final)
		cin >> Destino[Final];
	else
		CadastraDestino(Inicial + 1, Final, Destino);
	return;
}
void ListarDestino(int Final, char Destino[50])
{

	for (int i = 0; i < Final; i++)
		cout << i + 1 << " - Destino: " << Destino[i] << endl;
	return;
}

void CadastrarNovoRebanho(int Inicial, int Final, char InfRebanho[3], char Rebanho[50][3])
{

	if (Inicial == Final)
	{
		Rebanho[Final][0] = InfRebanho[0];
		Rebanho[Final][1] = InfRebanho[1];
		Rebanho[Final][2] = InfRebanho[2];
	}
	else
		CadastrarNovoRebanho(Inicial + 1, Final, InfRebanho, Rebanho);
	return;
}

void ListarRebanhos(int Final, char Rebanho[50][3])
{

	for (int i = 0; i < Final; i++)
		cout << i + 1 << " - Rebanho cod: " << Rebanho[i][0] << " Tipo: " << Rebanho[i][1] << " Origem: " << Rebanho[i][2] << endl;
	return;
}

void RegistrarColetaLa(char ColetaDeLa[200][2], char GuardaInfColeta[2], int Final)
{

	ColetaDeLa[Final][0] = GuardaInfColeta[0];
	ColetaDeLa[Final][1] = GuardaInfColeta[1];
	return;
}

int ContarCorteLaRebanho(char CodigoRebanho, char ColetaDeLa[200][2], int Final)
{

	int ContadorDeCortes = 0;
	for (int i = 0; i < Final; i++)
	{
		if (ColetaDeLa[i][0] == CodigoRebanho)
			ContadorDeCortes++;
	}
	return ContadorDeCortes;
}


int VerificaSeAbatido(char controleAbate[200][2], char codRebanho, int final)
{

	for (int i = 0; i< final; i++)
	{
		if (controleAbate[i][0] == codRebanho)
			return true;
	}
	return false;
}

void RegistrarAbate(char controleAbate[200][2], char GuardaInfAbate[2], int Final)
{


	controleAbate[Final - 1][0] = GuardaInfAbate[0];
	controleAbate[Final - 1][1] = GuardaInfAbate[1];
}

int main()
{
	setlocale(LC_ALL, "portuguese_brazil");

	// Declaração de variaveis
	//Tipo inteiro
	int opcao;
	int ContOrigem = 0;
	int ContDestino = 0;
	int ContOvino = 0;
	int ContRebanhos = 0;
	int ContLa = 0;
	int Inicial = 0;
	int ContAbate = 0;
	int AnimaisReb[50];
	//Tipo Char
	char Origem[50];
	char Destino[50];
	char TipoOvinos[50];
	char Rebanho[50][3];
	char ColetaDeLa[200][2];
	char ControleAbate[50][2];
	char GuardaInfRebanho[3];
	char GuardaInfColeta[2];
	//Tipo String
	string sair;

	while (true)
	{
		cout << "\tSistema de Controle de Rebanhos" << endl
			<< "1 - Cadastro e listagem dos tipos de ovinos" << endl
			<< "2 - Cadastro e listagem dos tipos de origens" << endl
			<< "3 - Cadastro e listagem dos destinos" << endl
			<< "4 - Cadastro e listagem dos rebanhos" << endl
			<< "5 - Controle de coleta de lã " << endl
			<< "6 - Controle de abate" << endl
			<< "7 - Sair" << endl
			<< "\tSelecione: ";

		cin >> opcao;

		switch (opcao)
		{
			// case 1
		case 1:
			cout << "Cadastrar novo Ovino: ";
			CadastraOvino(Inicial, ContOvino, TipoOvinos);
			cout << endl << "Ovino cadastrado com sucesso!" << endl << endl;
			ContOvino++;

			cout << "Deseja Listar os Ovinos ?" << endl
				<< "S - Sim         N - Não" << endl
				<< "***Digite letra minuscula***" << endl;
			cin >> sair;
			while (sair != "s" && sair != "n") // só aceita "s" ou "n", se for diferente, ele exibe uma a mensagem "Digite Novamente";
			{
				cout << "Digite Novamente" << endl;
				cin >> sair;
			}
			if (sair == "n") // se for "n" ele volta no menu;
				break;
			if (sair == "s") // se for "s" ele chama a função "ListarOvinos" e lista os ovinos cadastrados;
			{
				ListarOvinos(ContOvino, TipoOvinos);
				break;
			}
			break;
			// case 2
		case 2:
			cout << "Cadastrar nova Origem: ";
			CadastraOrigem(Inicial, ContOrigem, Origem);
			cout << endl << "Origem Cadastrado com sucesso!" << endl << endl;
			ContOrigem++;

			cout << "Deseja Listar as origens ?" << endl
				<< "S - Sim         N - Não" << endl
				<< "***Digite letra minuscula***" << endl;
			cin >> sair;
			while (sair != "s" && sair != "n") // só aceita "s" ou "n", se for diferente, ele exibe uma a mensagem "Digite Novamente";
			{
				cout << "Digite Novamente" << endl;
				cin >> sair;
			}
			if (sair == "n") // se for "n" ele volta no menu;
				break;
			if (sair == "s") // se for "s" ele chama a função "ListarOrigem" e lista as origens cadastrados;
			{
				ListarOrigem(ContOrigem, Origem);
				break;
			}
			break;
			// case 3
		case 3:
			cout << "Cadastrar novo codigo de Destino: ";
			CadastraDestino(Inicial, ContDestino, Destino);
			cout << endl << "Destino cadastrado com sucesso!" << endl << endl;
			ContDestino++;

			cout << "Deseja Listar os Destinos ?" << endl
				<< "S - Sim         N - Não" << endl
				<< "***Digite letra minuscula***" << endl;
			cin >> sair;
			while (sair != "s" && sair != "n") // só aceita "s" ou "n", se for diferente, ele exibe uma a mensagem "Digite Novamente";
			{
				cout << "Digite Novamente" << endl;
				cin >> sair;
			}
			if (sair == "n") // se for "n" ele volta no menu;
				break;
			if (sair == "s") // se for "s" ele chama a função "ListarDestino" e lista os destinos cadastrados;
			{
				ListarDestino(ContDestino, Destino);
				break;
			}
			break;
			// case 4
		case 4:
			if ((ContDestino == 0) || (ContOrigem == 0) || (ContOvino == 0))
			{
				cout << "Não existe nenhum destino e/ou origem e/ou tipo de ovino cadastrado!" << endl
					<< "Para realizar o cadastro de rebanho, cadastre pelo menos uma opção para cada item." << endl
					<< "Cadastramento cancelado!" << endl << endl;
				break;
			}

			cout << "Cadastramento de novo rebanho, Digite o código do rebanho: ";
			cin >> GuardaInfRebanho[0];
			cout << endl << "Selecione o tipo de ovinos:" << endl;

			ListarOvinos(ContOvino, TipoOvinos);
			cin >> opcao;

			while ((opcao <= 0) || (opcao > ContOvino))
			{
				cout << "Opção invalida, digite um número entre " << "1 e " << ContOvino << endl;
				cin >> opcao;
			}

			GuardaInfRebanho[1] = TipoOvinos[opcao - 1];

			cout << "Selecione uma origem: " << endl;

			ListarOrigem(ContOrigem, Origem);

			cin >> opcao;

			while ((opcao <= 0) || (opcao > ContOrigem))
			{
				cout << "Opção invalida, digite um número entre " << "1 e " << ContOrigem << endl;
				cin >> opcao;
			}

			GuardaInfRebanho[2] = Origem[opcao - 1];
			CadastrarNovoRebanho(Inicial, ContRebanhos, GuardaInfRebanho, Rebanho);
			cout << "Digite a quantidade de animais no rebanho:";
			cin >> AnimaisReb[ContRebanhos];
			cout << endl << "Rebanho cadastrado com sucesso!" << endl << endl;
			ContRebanhos++;

			cout << "Deseja Listar os Rebanhos ?" << endl
				<< "S - Sim         N - Não" << endl
				<< "***Digite letra minuscula***" << endl;
			cin >> sair;
			while (sair != "s" && sair != "n") // só aceita "s" ou "n", se for diferente, ele exibe uma a mensagem "Digite Novamente";
			{
				cout << "Digite Novamente" << endl;
				cin >> sair;
			}
			if (sair == "n") // se for "n" ele volta no menu;
				break;
			if (sair == "s") // se for "s" ele chama a função "ListarRebanhos" e lista os destinos cadastrados;
			{
				ListarRebanhos(ContRebanhos, Rebanho);
				break;
			}
			break;
			// case 5
		case 5:
			if (ContRebanhos == 0)
			{
				cout << "Não existem rebanhos cadastrados, cadastre algum rebanho para realizar o corte de lã!" << endl;
				break;
			}
			cout << "Digite o código do rebanho a ser feito o corte de lã:" << endl;
			ListarRebanhos(ContRebanhos, Rebanho);
			cout << "Selecione:";
			cin >> opcao;

			while ((opcao <= 0) || (opcao > ContRebanhos))
			{
				cout << "Opção invalida, digite um numero entre " << "1 e " << ContRebanhos << endl;
				cin >> opcao;
			}

			if (ContLa > 1)
			{
				if (ContarCorteLaRebanho(Rebanho[opcao - 1][0], ColetaDeLa, ContLa) >= 5)
					cout << "O rebanho ja recebeu 5 cortes de lã!" << endl << "Operação cancelada!" << endl;
			}
			else
			{
				GuardaInfColeta[0] = Rebanho[opcao - 1][0];
			}
			cout << "Digite o codigo do destino" << endl;

			ListarDestino(ContDestino, Destino);

			cin >> opcao;

			while ((opcao <= 0) || (opcao > ContDestino))
			{
				cout << "Opção invalida, digite um numero entre " << "1 e " << ContDestino << endl;
				cin >> opcao;
			}
			GuardaInfColeta[1] = Destino[opcao - 1];
			RegistrarColetaLa(ColetaDeLa, GuardaInfColeta, ContLa);
			ContLa++;
			break;
			// case 6
		case 6:
			if (ContRebanhos == 0)
			{
				cout << "Não existem rebanhos cadastrados, cadastre algum rebanho para realizar o abate!" << endl;
				break;
			}
			cout << "Digite o código do rebanho a ser abatido:" << endl;

			ListarRebanhos(ContRebanhos, Rebanho);
			cout << "Selecione:";

			cin >> opcao;

			while ((opcao <= 0) || (opcao > ContRebanhos))
			{
				cout << "Opção invalida, digite um número entre " << "1 e " << ContRebanhos << endl;
				cin >> opcao;
			}

			if (ContarCorteLaRebanho(Rebanho[opcao - 1][0], ColetaDeLa, ContLa)< 5)
				cout << "O rebanho ainda não recebeu 5 cortes de lã!" << endl << "Operacao cancelada!" << endl;
			break;

			GuardaInfColeta[0] = Rebanho[opcao - 1][0];

			cout << "Digite o código do destino" << endl;

			ListarDestino(ContDestino, Destino);

			cin >> opcao;

			while ((opcao <= 0) || (opcao > ContDestino))
			{
				cout << "Opção invalida, digite um número entre " << "1 e " << ContDestino << endl;
				cin >> opcao;
			}
			GuardaInfColeta[1] = Destino[opcao - 1];
			if (VerificaSeAbatido(ControleAbate, GuardaInfColeta[0], ContAbate))
			{
				cout << "rebanho já abatido" << endl;
				break;
			}
			RegistrarAbate(ControleAbate, GuardaInfColeta, ContAbate);
			ContAbate++;
			cout << "Corte cadastrado com sucesso!" << endl << endl;
			break;
			// case 7
		case 7:
			cout << "Tem certeza que deseja sair?" << endl;
			cout << "S - Sim          N - Não" << endl
				<< "***Digite letra minuscula***" << endl;
			cin >> sair;
			while (sair != "s" && sair != "n") // só aceita "s" ou "n", se for diferente, ele exibe uma a mensagem "Digite Novamente";
			{
				cout << "Digite Novamente" << endl;
				cin >> sair;
			}
			if (sair == "s") // se for "s" ele fecha o programa;
				return 0;
			else // se não, ele volta para o menu
			{
				cout << "Saída cancelada!" << endl;
				break;
			}

		default: // se a opcao for um numero fora do intervalo do switch, ele entra no default e mostra a mensagem de "Opção invalida!!"
			cout << "Opção invalida!!" << endl;

		}// switch
		system("pause");
		system("cls");
	}// while
	return 0;
}// main