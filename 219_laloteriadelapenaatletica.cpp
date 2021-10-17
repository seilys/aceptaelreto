#include <iostream>

using namespace std;

const int MAX = 10000;

// { PRE: 0 <= n <= longitud(n) }
int numPares(int v[], int n) /* return ret */
{ 
    // aqui, en la implementacion del algoritmo, solo hacemos whiles
    int ret = 0;
    int counter = 0;

    while (counter < n) {
        if (v[counter] % 2 == 0)
            ++ret;
        ++counter;
    }
    
    return ret;
}
// { POST: ret = # i : 0 <= i < n : v[i] MOD 2 = 0 }

void resuelve()
{
    int tam;
    int datos[MAX];
    cin >> tam;
    for (int i = 0; i < tam; i++)
        cin >> datos[i];

    int respuesta = 0;
    cout << numPares(datos, tam) << '\n';
}

int main()
{

    int numCasos;
    cin >> numCasos;
    for (int i = 0; i < numCasos; i++) {
            resuelve();
    }
    
    return 0;
}