#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan Banyak Data: ";
    cin >> n;

    int i = 2;
    while (i <= n) {
        cout << i << endl;
        i += 2;
    }

    return 0;
}
