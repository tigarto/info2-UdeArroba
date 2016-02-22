# Ejemplos
**1. Ejemplo 1**: 
Hacer un programa que calcule la hipotenusa de un triangulo rectángulo dados los dos catetos.

```
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
```

**2. Ejemplo 2**: 
Hacer un programa que calcule el área de un circulo.

```
#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

/*
Sinopsis:
Programa que calcula el area de un circulo dado su radio
*/

int main() {
	// Variables locales	
	float r, A;
	
	// Entrada de datos
	cout << "Ingrese el radio del circulo: ";
	cin >> r;
	// Proceso
	A = PI*pow(r,2);
	
	// Salida
	cout << "El area del circulo de radio " << r << "es: " << A << endl;	
	return 0;
}
```

**3. Ejemplo 3**: 
Hacer un programa solicite un entero de 2 dígitos y lo invierta.

```
#include <iostream>
#include <cmath>

using namespace std;

/*
Sinopsis:
Programa que invierte descenas y unidades de un numero de dos digitos
*/

// Variables globales	
int num, u, d, numinv;
	
int main() {
	// Entrada de datos
	cout << "Ingrese un entero de dos digitos: ";
	cin >> num;
	// Proceso
	d = num/10;
	u = num%10;
	numinv = 10*u + d;
	
	// Salida
	cout << "El numero " << num << "invertido es: " << numinv << endl;	
	return 0;
}
```

**4. Ejemplo 4**: 
Hacer un programa que solicite el nombre, la cedula y numero de horas trabajadas semanalmente y el costo por hora. Y retorne una colilla con el nombre, la cedula, el salario neto mensual teniendo en cuenta que al empleado se le  retiene un 10% del salario bruto debido a los gastos de salud y pensiones.

```
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/* Variables globales */

// Variables de entrada
string nom;
char ced[20];
float hr, vh;

// Variables de salida
float sal_neto;

// Variables auxiliares
float sal_bruto, imp;

#define TR 0.1

int main() {
    // Entrada de datos
    cout << "Digite el nombre: ";
    getline(cin,nom);
    cout << "Digite la cedula: ";
    cin >> ced;
    cout << "Digite el valor de la hora: ";
    cin >> vh;
    cout << "Digite la cantidad de horas trabajadas: ";
    cin >> hr;

    // Proceso
    sal_bruto = 4*vh*hr;
    imp = TR*sal_bruto;
    sal_neto = sal_bruto - imp;

    // Salida
    cout << "COLILLA DE PAGO " << endl << endl;
    cout << "-> Nombre: " << nom << endl;
    cout << "-> Cedula: " << ced << endl;
    cout << "-> Salario neto: " << sal_neto << endl;
    return 0;
}
```



