#include <iostream>

#define NUM_FILA 10

using namespace std;

int main()
{
    /** Declaracion de variables **/
    int i, j, N, reng, num = 0;
    /** Solicitud de los datos de entrada **/
    cout << "Digite la cantidad de numeros a imprimir: ";
    cin >> N;
    /** Ciclos anidados **/
    reng = N/NUM_FILA;
    for(i = 0; i < reng; i++) {
        // Ciclo externo
        for (j = 0; j < NUM_FILA; j++) {
            // Ciclo interno
            cout << num++ ;
        }
        cout << "\n";
    }
    return 0;
}
