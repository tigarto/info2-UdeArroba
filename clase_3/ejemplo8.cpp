#include <iostream>

using namespace std;

int main()
{
    /** Declaracion de variables **/
    int total = 0; // Total reacudado
    int ban; // Bandera que indica si hay cliente
    int recaudo; // Recaudo individual

    /** Solicitud de entradas **/
    cout << "Digite 1 si hay alguien en la fila o 0 si no: ";
    cin >> ban;
    while(ban == 1) {
        // Solicitud del recaudo individual
        cout << "Ingrese el recaudo: ";
        cin >> recaudo;
        total += recaudo;
        cout << "Digite 1 si hay alguien en la fila o 0 si no: ";
        cin >> ban;
    }
    /** Despliegue del total recogido **/
    cout << "El total recogido fue de: " << total << endl;
    return 0;
}
