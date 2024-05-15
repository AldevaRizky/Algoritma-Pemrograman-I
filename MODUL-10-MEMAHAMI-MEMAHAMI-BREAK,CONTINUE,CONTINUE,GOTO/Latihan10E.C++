#include <iostream>
using namespace std;

int main() {
    int angka;

input:
    cout << "Masukkan Angka [1..10] = ";
    cin >> angka;

    if (angka < 1 || angka > 10)
        goto input;

    cout << angka << endl;

    goto input;

    return 0;
}
