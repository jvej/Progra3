#include <iostream>
using namespace std;

// Este programa recibe un n�mero entero y determina si es par o impar y muestre su ubicaci�ne en la memoria utilizando punteros.
int main() {

	int numero, * dir_numero;

	cout << "Digite un numero: "; cin >> numero;

	dir_numero = &numero; //Estamos guardando la posici�n de memoria de la variable n�mero

	if (*dir_numero % 2 == 0) {
		cout << "El numero " << *dir_numero << " es par" << endl;
		cout << "La posicion de memoria " << dir_numero << endl;
	}
	else {
		cout << "El numero " << *dir_numero << " es impar" << endl;
		cout << "La posicion de memoria " << dir_numero << endl;
	}
	system("pause");
	return 0;
}