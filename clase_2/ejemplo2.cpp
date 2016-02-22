#include <iostream>

using namespace std;

int main() {
    /* Definicion de variables */
    int num1, num2;
    /* Proceso */
    cout <<"Ingrese los numeros: " << endl;
    cin >> num1 >> num2;
    if (num1%num2 == 0) {
        cout << num2 << " es divisor de " << num1 << endl;
    }
    else {
        cout << num2 << " no es divisor de " << num1 << endl;
    }
    return 0;
}