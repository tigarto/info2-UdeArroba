#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    /** Declaracion de variables **/
    int cnt = 0, suma = 0, dato; 
    float prom; 
    
    /** Solicitud del dato **/
    cout << "Entre el numero positivo o un numero negativo para terminar: ";
    cin >> dato;
    while(dato >= 0) {
        suma += dato;
        cnt++;
        // Solicitud del dato
        cout << "Entre el numero positivo o un numero negativo para terminar: ";
        cin >> dato;
    }
    /** Despliegue de los resultados **/
    // Despliegue de la suma
    cout << "Total: " << suma << endl;
    // Despliegue del promedio
    if (cnt == 0) {
        cout << "Promedio: 0\n";
    }
    else {
        prom = (float)suma/cnt;        
        cout << "Promedio: " << prom << endl;
    }
    return 0;
}
