#include <iostream>

using namespace std;

int main ()
{

	int paisesTotales = 0;
	cin >> paisesTotales;

	while (paisesTotales) {
	
		unsigned long long int parejas = 0, numForeing = 0, numThisCountry = 0;
		for (int i = 0; i < paisesTotales; i++) {
			cin >> numThisCountry;

			parejas += numThisCountry * numForeing;
			numForeing += numThisCountry;
		}

		cout << parejas << "\n";
		cin >> paisesTotales;
	}
}
