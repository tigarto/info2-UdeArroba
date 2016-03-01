#include <iostream>

using namespace std;

int main()
{
    int i; // Variable de control del ciclo
    int cnt = 0; // contador
    for (i = 0; i < 10; i++) {
        cnt += 1;
        cout << "cnt = " << cnt << endl;
    }
    return 0;
}
