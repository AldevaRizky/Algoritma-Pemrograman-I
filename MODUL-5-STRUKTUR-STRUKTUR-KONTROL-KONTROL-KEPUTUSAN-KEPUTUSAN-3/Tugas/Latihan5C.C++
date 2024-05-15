#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, barang;
    int pilihan_barang, jumlah_barang;
    float harga_satuan, total_harga;

    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);

    cout << "Selamat Datang " << nama << " Di KOPMA UNIPMA" << endl;

    cout << "Macam - Macam Barang :" << endl;
    cout << "1. Buku Tulis" << endl;
    cout << "2. Pensil" << endl;
    cout << "3. Penghapus" << endl;
    cout << "4. Spidol" << endl;
    cout << "5. Penggaris" << endl;

    cout << "Pilih barang yang ingin dibeli (1-5) : ";
    cin >> pilihan_barang;

    switch (pilihan_barang) {
        case 1:
            barang = "Buku Tulis";
            harga_satuan = 5000;
            break;
        case 2:
            barang = "Pensil";
            harga_satuan = 1000;
            break;
        case 3:
            barang = "Penghapus";
            harga_satuan = 2000;
            break;
        case 4:
            barang = "Spidol";
            harga_satuan = 3000;
            break;
        case 5:
            barang = "Penggaris";
            harga_satuan = 4000;
            break;
        default:
            cout << "Pilihan barang tidak valid!" << endl;
            return 1;
    }

    cout << "Jumlah Barang yang ingin dibeli : ";
    cin >> jumlah_barang;

    total_harga = harga_satuan * jumlah_barang;

    cout << "Barang yang dibeli        : " << barang << endl;
    cout << "Jumlah yang dibeli        : " << jumlah_barang << endl;
    cout << "Harga Satuan              : " << harga_satuan << endl;
    cout << "Total Harga               : " << total_harga << endl;

    return 0;
}
