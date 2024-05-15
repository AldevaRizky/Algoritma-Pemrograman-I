#include <iostream>
#include <string>
using namespace std;

int main() {
    int banyakData;
    cout << "Masukkan Banyaknya Data: ";
    cin >> banyakData;

    string nama;
    int harga, jumlah;
    double diskon, bayar, totalSemua = 0;
    int i = 1;

    do {
        cout << "Pelanggan ke " << i << endl;
        cout << "Masukkan Nama: ";
        cin >> nama;
        cout << "Masukkan Harga: ";
        cin >> harga;
        cout << "Masukkan Jumlah: ";
        cin >> jumlah;
        cout << "Masukkan Diskon (%): ";
        cin >> diskon;

        bayar = harga * jumlah * (100 - diskon) / 100;
        totalSemua += bayar;

        cout << "Bayar: " << bayar << endl;
        cout << "Total Semua: " << totalSemua << endl << endl;

        i++;
    } while (i <= banyakData);

    return 0;
}
