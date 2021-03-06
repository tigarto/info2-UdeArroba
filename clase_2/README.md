# Ejemplos
**1. Ejemplo 1**: 
En una empresa le dan a los empleados un subsidio de transporte si el sueldo base de estos es menor que el salario mínimo, este subsidio es el 30% del sueldo base. Hacer un algoritmo que calcule el salario neto de un empleado (sueldo base mas prestaciones si el empleado tiene derecho a estas). Los datos de entrada son la cedula y el sueldo base.

```
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
```

**2. Ejemplo 2**: 
Realizar un algoritmo que averigüe si de dos números por teclado el segundo es divisor del primero.

```
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
```

**3. Ejemplo 3**: 
En el la primaria de South Park las calificaciones se suelen calcular de acuerdo al siguiente cuadro:

| Grado numerico  | Grado en letra |
| ------------- | ------------- |
| Grado mayor o igual que 90  | A  |
| Grado menor que 90 pero mayor o igual que 80  | B  |
| Grado menor que 80 pero mayor o igual que 70  | C  |
| Grado menor que 70 pero mayor o igual que 60  | D  |
| Grado menor que 60   | E  |

Utilizando esta información, escribir un algoritmo que acepte una calificación numérica del estudiante [0,100], convierta esta calificación a su equivalente letra y visualice la calificación correspondiente en letra. 

** Solucion 1 **

```
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
    } else {
        if (notaNum >= 80) {
            notaLetra = 'B';
        }
        else {
            if (notaNum >= 70) {
                notaLetra = 'C';
            }
            else {
                if (notaNum >= 60) {
                    notaLetra = 'D';
                }
                else {
                    notaLetra = 'E';
                }
            }
        }
    }
    cout << "La nota en letra correspondiente a " << notaNum << " es " << notaLetra << endl;
    return 0;
}
```

** Solucion 2 **

```
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
```

**4. Ejemplo 4**: 
Se desea obtener la nomina semanal (salario neto) – de los empleados de una empresa cuyo trabajo se paga por horas y del siguiente modo:
* Las horas inferiores o iguales a 35 horas (normales) se pagan a una tarifa que se debe introducir por teclado igual que el numero de horas y el nombre del trabajador.
* Las horas superiores a 35 se pagaran como extra a un precio de 1.5 horas normales. 
* Los impuestos a deducir a los trabajadores varían en función de su sueldo mensual:
  * Si sueldo <= 20000, libre de impuestos.
  * Los siguientes 15000 al 20%.
  * El resto al 30%.

```
#include <iostream>
#include <string>

using namespace std;

int main() {
    /* Definicion de variables */
    //Entrada	
	string nom;
    float hr, tarifa;
	// Auxiliares
	float sBruto;
	// Salida
	float sNeto;

    /** Entrada **/
	// Solicitud de los datos de entrada
    cout << "Ingrese el nombre del empleado del empleado: ";
    getline(cin,nom);
	cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> hr;
    cout << "Ingrese el valor de la hora: ";
    cin >> tarifa;
	/** Proceso **/
	// Calculo del salario bruto
	if (hr <= 35) {
		sBruto = hr*tarifa;
	}
	else {
		sBruto = 35*tarifa + 1.5*(hr - 35)*tarifa;		
	}
	// Calculo de los impuestos a pagar
	if (sBruto <= 20000) {
		imp = 0;
	}
	else if (sBruto <= 35000) {
		imp = 0.2*(sBruto - 20000); 		
	}
	else {
		imp = 0.2*15000 + 0.3*(sBruto - 35000); 
	}
	/** Salida **/
    // Impresion de la colilla de pago
    cout << "** COLILLA DE PAGO **\n";
    cout << "- Nombre: " << nom << endl;
    cout << "- Salario Neto: $" << salNeto << endl;
    return 0;
}
```
**5. Ejemplo 5**:
Se tiene un restaurante en el cual se manejan una lista de platos tal y como lo muestra la siguiente tabla:

| Opcion  | Menu |
| ------------- | ------------- |
| 1  | Bandeja paisa  |
| 2  | Lechona tolimense  |
| 3  | Mondongo  |
| 4  | Churrasco  |
| 5  | Chunchurria  |
| 6  | Morcilla  |

Implementar un algoritmo que tome como entrada la opción y de devuelva como resultado a la salida el menú elegido.

```
#include <iostream>

int main() {
	int plato;
	cout << "---------------------------------------\n";
	cout << "-             MENU DEL DIA            -\n";
	cout << "---------------------------------------\n";
	cout << "1. Bandeja Paisa                       \n";
	cout << "2. Lechona Tolimense	                \n";
	cout << "3. Mondongo                            \n";
	cout << "4. Churrasco                           \n";
	cout << "5. Chunchurria                         \n";
	cout << "6. Morcilla                            \n";
	cout << "---------------------------------------\n";
	cout << "Seleccione el plato deseado: ";
    cin >> plato;
    switch(plato) {
		case 1: cout << "Usted selecciono Bandeja Paisa\n";
				break;
		case 2: cout << "Usted selecciono Lechona Tolimense\n";
				break;
		case 3: cout << "Usted selecciono Mondongo\n";
				break;
		case 4: cout << "Usted selecciono Churrasco\n";
				break;
		case 5: cout << "Usted selecciono Chunchurria\n";
				break;
		case 6: cout << "Usted selecciono Morcilla\n";
				break;
		default: cout << "Opcion no disponible\n";
	}	
	return 0;
}
```
