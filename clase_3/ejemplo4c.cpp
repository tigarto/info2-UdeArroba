#include <iostream>

using namespace std;

int main()
{
    int i = 0; // Variable de control del ciclo
    int cnt = 1; // Empleamos un contador
    while (i <= 9) {
        cout << "cnt = " << cnt++ << endl;
        i += 1;    // i = i + 1
    }
    return 0;
}
