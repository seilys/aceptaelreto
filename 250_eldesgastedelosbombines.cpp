#include <iostream>

using namespace std;

const int MAXDIAS = 1000000;

int calcula(int desgasteBombin[], int n, int sumaTotal)
{

    int sumaPrimeros = 0;
    int sumaFinales = sumaTotal;
    int i = 0, minimCounter = 0, minVariation = abs(sumaTotal);
    
    while(sumaPrimeros != sumaFinales && i < n)
    {
      
      sumaPrimeros += desgasteBombin[i];
      sumaFinales  -= desgasteBombin[i];
      
      ++i;
      int absSumTotal = abs(sumaTotal);
      
      if(abs(sumaPrimeros - sumaFinales) < minVariation)
      {
        minimCounter = i;
        minVariation = abs(sumaPrimeros - sumaFinales);
      }
    }

    return minimCounter;
}

int main()
{
    
    int numDiasPeriodo;
    cin >> numDiasPeriodo;

    if (numDiasPeriodo < 1 || numDiasPeriodo > MAXDIAS)
        return 0;

    while (numDiasPeriodo)
    {

        int desgasteBombin[numDiasPeriodo];
        int aux = 0, sumaTotal = 0;
        
        for (int i = 0; i < numDiasPeriodo; i++) {
			cin >> aux;
            sumaTotal += aux;
			desgasteBombin[i] = aux;
		}

        cout << calcula(desgasteBombin, numDiasPeriodo, sumaTotal) << '\n';
        cin >> numDiasPeriodo;
    }
    
    return 0;
}