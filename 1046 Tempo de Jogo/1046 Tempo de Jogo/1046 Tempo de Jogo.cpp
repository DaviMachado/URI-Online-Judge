#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, x = 0;
	cin >> a >> b;
	
	x = 24 - a + b; // 24 menos a hora do "inicio" do jogo, mais a hora do "final" do jogo;

	if (x > 24)
	{
		x = abs(24 - (24 - a + b)); 
	}

	cout << "O JOGO DUROU " << x << " HORA(S)" << endl;

	system("PAUSE");
	return 0;
}