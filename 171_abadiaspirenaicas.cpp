#include <iostream>
#include <vector>

using namespace std;

int abadiasPosibles(int cordillera[], int montanias)
{

	int masAlta = cordillera[montanias - 1];
	int abadias = 1;
	int i = montanias - 2;

	while(i >= 0) {
		if (cordillera[i] > masAlta) {
			masAlta = cordillera[i];
			++abadias;
		}
		--i;
	}

	return abadias;
}

int main()
{
	int montanias = 0;
	cin >> montanias;

	while (montanias) {
	
		int cordillera[montanias];
		int aux;
		for (int i = 0; i < montanias; i++) {
			cin >> aux;
			cordillera[i] = aux;
		}

		cout << abadiasPosibles(cordillera, montanias) << "\n";
		cin >> montanias; 
	}

	// el por defecto de main
	return 0;
}
