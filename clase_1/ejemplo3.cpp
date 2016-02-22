#include <iostream>
#include <cmath>

using namespace std;

/*
Sinopsis:
Programa que invierte descenas y unidades de un numero de dos digitos
*/

// Variables globales	
int num, u, d, numinv;
	
int main() {
	// Entrada de datos
	cout << "Ingrese un entero de dos digitos: ";
	cin >> num;
	// Proceso
	d = num/10;
	u = num%10;
	numinv = 10*u + d;
	
	// Salida
	cout << "El numero " << num << "invertido es: " << numinv << endl;	
	return 0;
}