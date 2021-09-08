#include <stdio.h>
#include <string>
#include <iostream>
#include <unordered_set>
#include<bits/stdc++.h>

using namespace std;

int kaprekariters(string number)
{
	
	// Si el número es 6174, imprimimos 0 y pasamos al siguiente
	if (number == "6174")
		return 0;

	// Si tiene menos de 4 dígitos, rellenamos con 0s. Tiene que ser aquí, para que no lo mal detecte como rep
	while (number.size() < 4)
		number = "0" + number;

	// Comprobamos que no sea repdigits
	unordered_set<char> digitos;
	for (char digito : number)
		digitos.insert(digito);
	if (digitos.size() == 1)
		return 8;

	// Resto de casos:
	sort(number.begin(), number.end());
	int numMenor = stoi(number);
	sort(number.begin(), number.end(), greater<int>());
	int numMay = stoi(number);

	return 1 + (kaprekariters(to_string(numMay - numMenor)));
}

int main()
{

	int iter = 0;
	cin >> iter;

	for (int i = 0; i < iter; i++) {

		string number = "";
		cin >> number;

		// Si es de más de 4 dígitos, nos vamos
		if (number.size() > 4)
			return 0;

		cout << kaprekariters(number) << "\n";
	}
	return 0;
}
