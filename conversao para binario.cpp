#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
int decimal=0;          // declaração das variaveis
    string bin;         // declaraçao de variavel de letras 
    
    cout<<"Conversao de decimal para Diversas bases\n";
    
    cout<<"Digite um numero positivo maior que 0: ";
    cin>>decimal;
    while(decimal<=0)//consistindo
    {
                     cout<<"Digite um numero positivo: ";
                     cin>>decimal;
    }
                     //Conversao para binario
    while(decimal>0) // condição do while 
    {                // valor digitado é maior q zero ?
                    if(decimal%2==0)
                    {// se sim divide ele por 2 ate dar resto zero
                                 bin="0"+bin;   // guarda o restante do valor 
                    }
                    else
                    {
                        bin="1"+bin;
                    }// se nao , volta 1 
    decimal=decimal/2; // divisão do decimal 
    }
     cout<<"A conversao para binario eh: "<<bin<<"\n";    // exibição do valor em binario
    system("PAUSE");
    return EXIT_SUCCESS;
}
