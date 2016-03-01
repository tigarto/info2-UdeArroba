#include <iostream>

using namespace std;

int main()
{
    int i = 0; 
    int cnt = 1; 
    while (i <= 9) {
        cout << "cnt = " << cnt++ << endl;
        i += 1;    // i = i + 1
    }
    return 0;
}
