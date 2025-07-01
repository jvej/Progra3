#include <iostream>
using namespace std;

class Persona {
private: //Atributos de una persona
	string nombre;
	int edad;
public: //Métodos
	Persona(string, int); //Constructor
	void leer();
	void correr();
};

//Constructor, nos sirve para inicializar los atributos de la clase
Persona::Persona(string name, int ege) {

	nombre = name;
	edad = ege;
}

void Persona::leer() {
	cout << "Soy: " << nombre << " y estoy leyendo un libro" << endl;
}

void Persona::correr() {
	cout << "Soy: " << nombre << " y estoy corriendo una maraton y tengo " << edad << " anios " << endl;
}
int main() {

	Persona p1 = Persona("Juan", 25); //Creamos un objeto de la clase Persona
	p1.leer(); //Llamamos al método leer del objeto p1
	Persona p2("Maria", 30); //Creamos otro objeto de la clase Persona
	p2.correr(); //Llamamos al método correr del objeto p2
	Persona p3("Carlos", 20); //Creamos otro objeto de la clase Persona
	p3.correr(); //Llamamos al método correr del objeto p3
	system("pause");
	return 0;
}
