#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, i, leds;
	string led;
	cin >> n;
	while (n > 0)
	{
		leds = 0;
		n = n - 1;
		cin >> led;
		for (i = 0; i < led.length(); i++)
		{
			if (led[i] == '1')
				leds = leds + 2;
			else if (led[i] == '2' || led[i] == '3' || led[i] == '5')
				leds = leds + 5;
			else if (led[i] == '4')
				leds = leds + 4;
			else if (led[i] == '6' || led[i] == '9' || led[i] == '0')
				leds = leds + 6;
			else if (led[i] == '7')
				leds = leds + 3;
			else if (led[i] == '8')
				leds = leds + 7;
		}
		cout << leds << " leds\n";
	}

	system("PAUSE");
	return 0;
}