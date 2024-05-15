#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, barang;
    int pilihan_barang, jumlah_barang;
    float harga_satuan, total_harga;

    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);

    cout << "Selamat Datang " << nama << " Di Bengkel Yamaha" << endl;

    cout << "Macam - Macam Barang :" << endl;
    cout << "1. Velg Racing" << endl;
    cout << "2. Spion" << endl;
    cout << "3. Knalpot" << endl;
    cout << "4. Busi" << endl;
    cout << "5. Oli" << endl;

    cout << "Pilih barang yang ingin dibeli (1-5) : ";
    cin >> pilihan_barang;

    switch (pilihan_barang) {
        case 1:
            barang = "Velg Racing";
            harga_satuan = 500000;
            break;
        case 2:
            barang = "Spion";
            harga_satuan = 75000;
            break;
        case 3:
            barang = "Knalpot";
            harga_satuan = 1000000;
            break;
        case 4:
            barang = "Busi";
            harga_satuan = 35000;
            break;
        case 5:
            barang = "Oli";
            harga_satuan = 50000;
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
