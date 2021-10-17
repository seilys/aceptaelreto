#include <iostream>
#include <math.h>

using namespace std;

int MOD = 1000007;

// { PRE : 0 < x <= 100 ^ 0 <= n <= 1000 }
int calcula(int x, int n)
{

    int ret = 1;
    int i = 0;
    int potencia;

    while (i <= n) {
        potencia = pow(x, i);
        potencia = potencia % MOD ;
        ret = (ret + potencia) % MOD;
        ++i;
    }
    
    return ret;
}

int main()
{

    int x, n = 0;
    cin >> x >> n;

    // control del tamaño del input
    if (x < 0 || x > 100)
        return 0;
    if (n <= 0 || n >= 1000000)
        return 0;

    while (cin) {
        cout << calcula(x, n) << '\n';
        cin >> x >> n;
    }
    
    return 0;
}