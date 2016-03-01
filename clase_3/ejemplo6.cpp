#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    /** Fuera del ciclo - Antes **/
    int i;
    int cnt3 = 0, sum3 = 0, sum = 0;
    float prom3;
    int N; // Numero final
    cout << "Ingrese el numero positivo: ";
    cin >> N;
    for (i = 0; i < N; i++) {
        /** Interior del ciclo **/
        cout << "Termino " << i << " = " << i + 1 << endl;
        sum += i;   // sum = sum + i
        if (i%3 == 0) {
            sum3 += i;  // sum3 = sum3 + i
            cnt3 += 1;  // cnt3 = cnt3 + i
        }
    }
    /** Fuera del ciclo - Despues **/
    prom3 = (float)sum3/cnt3;
    cout << "*******************\n";
    cout << "Resultados\n";
    cout << "Suma de los numeros de 1 a " << N << ": “ << sum << endl;
    cout << "Promedio de los multiplos de 3 desde 1 " << N << ": " << prom3 << endl;
    cout << "*******************\n";
    return 0;
}
