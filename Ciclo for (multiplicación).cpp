#include <iostream>
using namespace std;

//Realice un programa que solicite de la entrada estándar un entero del 1
// al 10 y muestre por pantalla la tabla de multiplicar de ese número.

int main() {
	int num;
	do {
		cout << "Ingrese el numero que quieres multiplicar: " << endl;
		cin >> num;
	} while ((num < 1) || (num > 10));
	int i;
	for (i= 1; i <= 20; i++) {
		cout << num  <<" * " <<i<<" = " << num * i << endl;
	}
	system("pause");
	return 0;
}