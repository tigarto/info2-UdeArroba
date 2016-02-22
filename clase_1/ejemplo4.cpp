#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/* Variables globales */

// Variables de entrada
string nom;
char ced[20];
float hr, vh;

// Variables de salida
float sal_neto;

// Variables auxiliares
float sal_bruto, imp;

#define TR 0.1

int main() {
    // Entrada de datos
    cout << "Digite el nombre: ";
    getline(cin,nom);
    cout << "Digite la cedula: ";
    cin >> ced;
    cout << "Digite el valor de la hora: ";
    cin >> vh;
    cout << "Digite la cantidad de horas trabajadas: ";
    cin >> hr;

    // Proceso
    sal_bruto = 4*vh*hr;
    imp = TR*sal_bruto;
    sal_neto = sal_bruto - imp;

    // Salida
    cout << "COLILLA DE PAGO " << endl << endl;
    cout << "-> Nombre: " << nom << endl;
    cout << "-> Cedula: " << ced << endl;
    cout << "-> Salario neto: " << sal_neto << endl;
    return 0;
}