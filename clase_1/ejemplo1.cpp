#include <iostream>
#include <cmath>

using namespace std;

/*
Sinopsis:
Programa que calcula la hipotenusa de un triangulo rectangulo dados los dos catetos
*/

int main() {
    // Variables locales
    float c1, c2, h;

    // Entrada de datos
    cout << "Ingrese los catetos: " << endl;
    cin >> c1 >> c2;

    // Proceso
    h = sqrt(pow(c1,2) + pow(c2,2));

    // Salida
    cout << "La hipotenusa es: " << h << endl;
    return 0;
}