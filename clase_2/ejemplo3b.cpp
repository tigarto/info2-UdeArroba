#include <iostream>

using namespace std;

int main() {
    /* Definicion de variables */
    float notaNum;
    char notaLetra;
    /* Proceso */
    cout <<"Ingrese la nota numerica [0,100]:\n";
    cin >> notaNum;
    if (notaNum >= 90) {
        notaLetra = 'A';
    }
    else if (notaNum >= 80) {
        notaLetra = 'B';
    }
    else if (notaNum >= 70) {
        notaLetra = 'C';
    }
    else if (notaNum >= 60) {
        notaLetra = 'D';
    }
    else {
        notaLetra = 'E';
    }
    cout << "La nota en letra correspondiente a " << notaNum << " es " << notaLetra << endl;
    return 0;
}