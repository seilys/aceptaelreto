#include <iostream>

using namespace std;

int main()
{
	
	int casosDeUso = 0;
	cin >> casosDeUso;

	for (int i = 0; i < casosDeUso; i++) {
		int numero = 0;
		cin >> numero;

		if (numero < 0)
			continue;

		switch(numero){
			case 0:
			case 1: cout << "1\n";
				break;
			case 2: cout << "2\n";
				break;
			case 3: cout << "6\n";
				break;
			case 4: cout << "4\n";
				break;
			default:
				cout << "0\n";
				break;
		}
		// El factorial de cualquier número mayor o igual a 5 tiene que terminar en cero porque contiene el producto 5*2.
	}
	return 0;
}
