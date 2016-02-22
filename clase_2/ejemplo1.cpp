#include <iostream>
#include <string>

#define SMIN 689454

using namespace std;

int main() {
    /* Definicion de variables */
    string ID;
    float salBase, salNeto, sub;

    // Proceso
    cout << "Ingrese la Identificacion del empleado: ";
    cin >> ID;
    cout << "Ingrese el salario base del empleado: ";
    cin >> salBase;
    salNeto = salBase;
    if (salBase < SMIN) {
        sub = 0.3*salBase;
        salNeto = salBase + sub;
    }
    cout << "** COLILLA DE PAGO **\n";
    cout << "- Identificacion: " << ID << endl;
    cout << "- Salario Neto: $" << salNeto << endl;
    return 0;
}