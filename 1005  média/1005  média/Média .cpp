#include<iostream>
using namespace std;
int main()
{
	double a = 0, b = 0, media = 0;
	cin >> a;
	cin >> b;
	a = a * 3.5;
	b = b * 7.5;
	media = (a + b) / 11;
	printf("MEDIA = %.5f\n", media);
	system("PAUSE");
	return EXIT_SUCCESS;
}