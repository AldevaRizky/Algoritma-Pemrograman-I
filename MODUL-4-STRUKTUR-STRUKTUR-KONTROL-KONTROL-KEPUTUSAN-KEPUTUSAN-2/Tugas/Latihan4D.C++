#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_BARANG = 5;
    string namaBarang[MAX_BARANG];
    int jumlahBarang[MAX_BARANG];
    double hargaSatuan[MAX_BARANG];
    double jumlahHarga[MAX_BARANG];
    double totalHarga = 0;

    // Memasukkan data barang
    cout << "Masukkan data barang:" << endl;
    for (int i = 0; i < MAX_BARANG; ++i) {
        cout << "Barang " << i + 1 << ":" << endl;
        cout << "Nama barang: ";
        getline(cin, namaBarang[i]);
        cout << "Jumlah barang: ";
        cin >> jumlahBarang[i];
        cout << "Harga satuan: ";
        cin >> hargaSatuan[i];
        cin.ignore(); // Membersihkan buffer input
        jumlahHarga[i] = jumlahBarang[i] * hargaSatuan[i];
        totalHarga += jumlahHarga[i];
    }

    // Menampilkan tabel
    cout << "------------------------------------------------------" << endl;
    cout << "| N0 |  NAMA BARANG  | JML BARANG | HARGA SATUAN | JUMLAH HARGA |" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < MAX_BARANG; ++i) {
        cout << "| " << setw(2) << i + 1 << " | ";
        cout << setw(14) << namaBarang[i] << " | ";
        cout << setw(10) << jumlahBarang[i] << " | ";
        cout << setw(12) << hargaSatuan[i] << " | ";
        cout << setw(13) << jumlahHarga[i] << " |" << endl;
    }
    cout << "------------------------------------------------------" << endl;
    cout << "| TOTAL HARGA                                    | ";
    cout << setw(13) << totalHarga << " |" << endl;
    cout << "------------------------------------------------------" << endl;

    return 0;
}
