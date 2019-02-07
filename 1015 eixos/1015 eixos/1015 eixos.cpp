#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	cout << fixed << setprecision(4);
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, distancia = 0;
	
	cin >> x1 >> y1;
	cin >> x2 >> y2;

	distancia = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
	cout << distancia << endl;

	system("PAUSE");
	return 0;
}