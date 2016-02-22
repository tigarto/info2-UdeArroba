#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

/*
Sinopsis:
Programa que calcula el area de un circulo dado su radio
*/

int main() {
	// Variables locales	
	float r, A;
	
	// Entrada de datos
	cout << "Ingrese el radio del circulo: ";
	cin >> r;
	// Proceso
	A = PI*pow(r,2);
	
	// Salida
	cout << "El area del circulo de radio " << r << "es: " << A << endl;	
	return 0;
}