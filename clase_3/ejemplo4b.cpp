#include <iostream>

using namespace std;

int main()
{
    int i = 1; 
    while (i < 10) {
        cout << "i = " << i + 1 << endl;
        i += 1;    // i = i + 1
    }
    return 0;
}
