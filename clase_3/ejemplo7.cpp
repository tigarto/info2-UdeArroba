#include <iostream>

using namespace std;

int main()
{
    /** Declaracion de variables **/
    int i;
    int cntNeg = 0, cntPos = 0, sumNeg = 0, sumPos = 0;
    int N;
    int num;
    float pNeg, pPos, promNeg, promPos;
    /** Solicitud de entradas **/
    cout << "Ingrese la cantidad de numeros a leer: ";
    cin >> N;
    for(i = 1; i <= N;i++) {
        // Solicitud del numero
        cout << "Ingrese el numero: " << i << " : ";
        cin >> num;
        // Determinacion del tipo de numero
        if (num >= 0) {
            cntPos += 1;
            sumPos += num;
        }
        else {
            cntNeg++;
            sumNeg += num;
        }
    }
    /** Calculo de los promedios y porcentajes **/
    pNeg = ((float)cntNeg/N)*100;
    pPos = ((float)cntPos/N)*100;
    promNeg = (float)sumNeg/cntNeg;
    promPos = (float)sumPos/cntPos;
    /** Despliegue de los datos de salida **/
    cout << "\nESTADISTICAS\n";
    cout << "Porcentaje de numeros negativos: "<< pNeg << endl;
    cout << "Porcentaje de numeros positivos: "<< pPos << endl;
    cout << "Promedio de numeros negativos: : "<< promNeg << endl;
    cout << "Promedio de numeros positivos: : "<< promPos << endl;
    return 0;
}
