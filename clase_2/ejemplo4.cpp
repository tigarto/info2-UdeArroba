#include <iostream>
#include <string>

using namespace std;

int main() {
    /* Definicion de variables */
    //Entrada	
	string nom;
    float hr, tarifa;
	// Auxiliares
	float sBruto;
	// Salida
	float sNeto;

    /** Entrada **/
	// Solicitud de los datos de entrada
    cout << "Ingrese el nombre del empleado del empleado: ";
    getline(cin,nom);
	cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> hr;
    cout << "Ingrese el valor de la hora: ";
    cin >> tarifa;
	/** Proceso **/
	// Calculo del salario bruto
	if (hr <= 35) {
		sBruto = hr*tarifa;
	}
	else {
		sBruto = 35*tarifa + 1.5*(hr - 35)*tarifa;		
	}
	// Calculo de los impuestos a pagar
	if (sBruto <= 20000) {
		imp = 0;
	}
	else if (sBruto <= 35000) {
		imp = 0.2*(sBruto - 20000); 		
	}
	else {
		imp = 0.2*15000 + 0.3*(sBruto - 35000); 
	}
	/** Salida **/
    // Impresion de la colilla de pago
    cout << "** COLILLA DE PAGO **\n";
    cout << "- Nombre: " << nom << endl;
    cout << "- Salario Neto: $" << salNeto << endl;
    return 0;
}