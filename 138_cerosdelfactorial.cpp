#include <iostream>

using namespace std;

int cerosEnFactorial(int numero)
{

	long long int potenciaBase = 5;
	int cerosEncontrados = 0;

	while(potenciaBase <= numero) {
		cerosEncontrados += numero/potenciaBase;
		potenciaBase *= 5;
	}

	return cerosEncontrados;
}

int main ()
{


	int numeroCasos = 0;
	cin >> numeroCasos;
	for (int i = 0; i < numeroCasos; i++) {
		int numero = 0;
		cin >> numero;

		cout << cerosEnFactorial(numero) << "\n";
	}

	return 0;
}
