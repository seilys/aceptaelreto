#include <iostream>
#include <algorithm>

using namespace std;

int moda(int v[], int n) /* return ret */
{
    int i = 1;
    int ret = v[0];

    int frecuencia = 1;
    int contAux = 1;

    while (i < n) {

        if (v[i] == v[i-1])
            ++contAux;
        else 
            contAux = 1;
        if (contAux >= frecuencia) {
            frecuencia = contAux;
            ret = v[i];
        }
        ++i;
    }

    return ret;
}

void ejecuta(int casos)
{
    int numeros[casos];
    for (int i = 0; i < casos; i++)
        cin >> numeros[i];
 
    sort(numeros, numeros + casos);
    cout << moda(numeros, casos) << '\n';
}

int main()
{

    int casos = 0;
    cin >> casos;
    while (casos)
    {
        ejecuta(casos);
        /* code */
        cin >> casos;
    }
    
    return 0;
}