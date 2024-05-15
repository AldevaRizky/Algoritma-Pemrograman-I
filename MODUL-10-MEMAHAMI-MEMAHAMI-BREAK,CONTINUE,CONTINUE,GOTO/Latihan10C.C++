#include <iostream>
using namespace std;

int main() {
    int jumlah;

    cout << "Jumlah : ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; ++i) {
        cout << i << endl;
        if (i == 10)
            continue;
    }

    return 0;
}
