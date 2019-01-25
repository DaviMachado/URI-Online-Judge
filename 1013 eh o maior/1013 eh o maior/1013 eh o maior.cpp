#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, maiorAB = 0;
	cin >> a >> b >> c;

	maiorAB = ((a + b) + (abs(a - b))) / 2;

	a = maiorAB;
	b = c;
	
	maiorAB = ((a + b) + (abs(a - b))) / 2;

	cout << maiorAB << " eh o maior" << endl;

	system("PAUSE");
	return 0;
}