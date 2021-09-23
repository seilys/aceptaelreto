#include <iostream>

using namespace std;


long long erasmus(int n)
{
    long long parejas = 0;
    int i = 0;
    long long sumaAcu = 0;
	long long alumnosPais;

	while (i < n) {
		cin >> alumnosPais;
        parejas += sumaAcu*alumnosPais;
        sumaAcu += alumnosPais;

        ++i;
    }

    return parejas;
}


int main ()
{

	int paisesTotales = 0;
	cin >> paisesTotales;

	while (paisesTotales) {
		cout << erasmus(paisesTotales) << "\n";
		cin >> paisesTotales;
	}
}
