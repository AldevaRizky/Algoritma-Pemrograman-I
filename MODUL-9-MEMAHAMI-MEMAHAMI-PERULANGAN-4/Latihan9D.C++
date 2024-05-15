#include <iostream>
#include <string>
using namespace std;

int main() {
    int banyakBarang;
    cout << "Masukkan banyak barang yang dimasukkan: ";
    cin >> banyakBarang;

    string barang;
    int i = 1;

    do {
        cout << "Barang ke " << i << " = ";
        cin >> barang;
        i++;
    } while (i <= banyakBarang);

    cout << "Anda sudah memasukkan semua barang" << endl;

    return 0;
}
