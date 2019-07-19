#include<iostream>
using namespace std;
int main()
{ 
	int i, j1 = 7, j2 = 6, j3 = 5;

	for (i = 1; i <= 9; i += 2)
	{
		cout << "I=" << i << " " << "J=" << j1 << endl;
		cout << "I=" << i << " " << "J=" << j2 << endl;
		cout << "I=" << i << " " << "J=" << j3 << endl;
		j1 = j1 + 2;
		j2 = j2 + 2;
		j3 = j3 + 2;
	}

	system("PAUSE");
	return 0;
}