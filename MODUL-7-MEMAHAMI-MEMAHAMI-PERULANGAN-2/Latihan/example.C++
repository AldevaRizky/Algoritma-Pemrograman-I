#include <iostream>

using namespace std;

int main() {
    for (int a = 1; a <= 5; a++) {
        cout << endl;
        for (int b = a; b <= 5; b++)
            cout << " " << a << " ";
    }

    return 0;
}
