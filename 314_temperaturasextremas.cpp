#include <iostream>

using namespace std;

const int MAXCASOS = 10000;
/*
La primera línea contiene un número que indica el número de casos de prueba que aparecen a continuación.

Cada caso de prueba se compone de dos líneas. La primera de ellas tiene un único entero con el número de 
temperaturas registradas (mayor que 0 y menor o igual que 10.000), mientras que la segunda línea contiene 
la secuencia de temperaturas (números enteros entre −50 y 60 grados centígrados).*/

// Una temperatura se considera pico (resp. valle) en una secuencia cuando la anterior y la siguiente en la secuencia son estrictamente menores (resp. mayores).

void calculateVallePico(int temperaturas[], int numTemps)
{

    int picos = 0;
    int valles = 0;

    int s = 0;
    int k = 1;
    int q = 2;
    
    while(q < numTemps) {
        if (temperaturas[s] < temperaturas[k] && temperaturas[k] > temperaturas[q]) {
            picos++;
        }
        if (temperaturas[s] > temperaturas[k] && temperaturas[k] < temperaturas[q]) {
            valles++;
        }
        s++;
        k++;
        q++;
    }

    cout << picos << ' ' << valles << '\n'; 
}

void getData()
{

    int numTemps = 0;
    cin >> numTemps;

    int temperaturas[numTemps];
    for (int i = 0; i < numTemps; i++)
        cin >> temperaturas[i];

    calculateVallePico(temperaturas, numTemps);
}

int main()
{

    int numCasos, numTemps = 0;
    cin >> numCasos;

    for (int i = 0; i < numCasos; i++)
        getData();

    return 0;
}