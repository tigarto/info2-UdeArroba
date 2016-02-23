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