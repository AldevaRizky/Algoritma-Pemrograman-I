#include <iostream>
using namespace std;

int main() {
    char kode;

    cout << "Masukkan Kode Barang [A..C] : ";
    cin >> kode;

    switch (kode) {
        case 'A':
            cout << "Sabun Mandi";
            break;
        case 'B':
            cout << "Sabun Cuci";
            break;
        case 'C':
            cout << "Deterjen";
            break;
        default:
            cout << "Anda Salah Memasukkan kode";
            break;
    }

    return 0;
}
