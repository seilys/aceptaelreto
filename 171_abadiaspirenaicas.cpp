#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int montanias = 0;
	cin >> montanias;

	while (montanias) {
	
		vector<int> cordillera;
		int aux;
		for (int i = 0; i < montanias; i++) {
			cin >> aux;
			// lo añadimos al final del vector
			cordillera.push_back(aux);
		}

		int masAlta = cordillera[montanias-1];
		int abadias = 1;

		for (int i = montanias - 2; i >= 0; i--) {
			if (cordillera[i] > masAlta) {
				masAlta = cordillera[i];
				abadias++;
			}
		}

		cout << abadias << "\n";
		cin >> montanias; 
	}

	// el por defecto de main
	return 0;
}
