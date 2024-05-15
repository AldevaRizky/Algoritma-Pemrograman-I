#include <iostream>
using namespace std;

int main() {
    int kodeBarang;
    const int stokTersedia = 30;

    cout << "Kode Barang (1..3) : ";
    cin >> kodeBarang;

    switch(kodeBarang) {
        case 1:
            cout << "Anda memilih Kode Barang 1" << endl;
            break;
        case 2:
            cout << "Anda memilih Kode Barang 2" << endl;
            break;
        case 3:
            cout << "Anda memilih Kode Barang 3" << endl;
            cout << "Nomer Barang Tersedia dan Stok Tersedia: " << stokTersedia << endl;
            break;
        default:
            cout << "Kode Barang tidak valid" << endl;
            break;
    }

    return 0;
}
