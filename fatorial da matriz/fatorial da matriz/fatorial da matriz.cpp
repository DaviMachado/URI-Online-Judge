#include<iostream>
using namespace std;
int main()
{
	int mata[2][2], matb[2][2], i, j, cont;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Digite a " << i + 1 << " linha e " << j + 1 << " coluna: "; 
			cin >> mata[i][j];                                                         
			matb[i][j] = 1;                                                             
			for (cont = 1; cont <= mata[i][j]; cont++)                                 
			{
				matb[i][j]= matb[i][j]*cont;                                      
			} 
		}     
	}                           
	cout << endl;              
	for (i = 0; i < 2; i++)     
	{                          
		for (j = 0; j < 2; j++)
		{
			cout <<"\t"<< mata[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "\t" << matb[i][j];
		}
		cout << endl;
	}
	cout << endl;

	system("PAUSE");
	return 0;
}