#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{


	int filas, columnas = 0;
	cin >> filas >> columnas;
	string aux = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (filas && columnas) {

		string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		// pedimos el cuadro al usuario y lo almacenamos en colorsVector
		string colorsVector[filas];
		for (int i = 0; i < filas; i++){
			
			char input[columnas];
			cin >> input;
			colorsVector[i] = input;
                }

		// recogemos el código de intercambio y reemplazamos en alfabeto
		int numDaltonicos = 0;
                cin >> numDaltonicos;
                for (int i = 0; i < numDaltonicos; i++){
              		char colorOriginal, colorChange;
	       		cin >> colorOriginal;
                 	cin >> colorChange;
			std::replace(alfabeto.begin(), alfabeto.end(), colorOriginal, colorChange);				
                }

		//Recorremos la matriz e imprimimos los caracteres cifrados
		for(int i = 0; i < filas; i++){
			for(int j = 0; j < columnas; j++){
				cout << alfabeto.at(aux.find(colorsVector[i][j]));
				// System.out.print(""+codigo.charAt(alfabeto.indexOf(matriz[l][m])));
			}
			cout << "\n";
		}

		cin >> filas >> columnas;
	}

	return 0;
}
