#include <iostream>

int main() {
  int i = 1, N;
  cout << "Ingrese la cantidad de veces que desea imprimir la palabra: ";
  cin >> N;
  do {
    cout << "Hola mundo";
	i++;
  } while(i <= N);
  return 0;
}
