#include <iostream>
using namespace std;

int main() {
    int angka1, angka2, angka3;

    // Meminta pengguna untuk memasukkan tiga angka
    cout << "Input ANGKA-1: ";
    cin >> angka1;

    cout << "Input ANGKA-2: ";
    cin >> angka2;

    cout << "Input ANGKA-3: ";
    cin >> angka3;

    // Menentukan apakah angka-1 adalah genap atau ganjil
    if (angka1 % 2 == 0) {
        cout << "ANGKA-1 = " << angka1 << " adalah GENAP" << endl;
    } else {
        cout << "ANGKA-1 = " << angka1 << " adalah GANJIL" << endl;
    }

    // Menentukan apakah angka-2 adalah genap atau ganjil
    if (angka2 % 2 == 0) {
        cout << "ANGKA-2 = " << angka2 << " adalah GENAP" << endl;
    } else {
        cout << "ANGKA-2 = " << angka2 << " adalah GANJIL" << endl;
    }

    // Menentukan apakah angka-3 adalah genap atau ganjil
    if (angka3 % 2 == 0) {
        cout << "ANGKA-3 = " << angka3 << " adalah GENAP" << endl;
    } else {
        cout << "ANGKA-3 = " << angka3 << " adalah GANJIL" << endl;
    }

    return 0;
}
