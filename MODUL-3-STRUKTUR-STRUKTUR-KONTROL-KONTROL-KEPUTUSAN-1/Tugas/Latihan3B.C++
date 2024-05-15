#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string kodeBarang, namaBarang;
    int jumlahBarang;
    double hargaSatuan, totalHarga, bayar, kembali;

    cout << "****************************************************" << endl;
    cout << "NOTA PENJUALAN KOMPUTER" << endl;
    cout << "****************************************************" << endl;

    cout << "Kode Barang : ";
    cin >> kodeBarang;
    cout << "Nama Barang : ";
    cin.ignore();
    getline(cin, namaBarang);
    cout << "Jumlah Barang : ";
    cin >> jumlahBarang;
    cout << "Harga Satuan : Rp. ";
    cin >> hargaSatuan;

    totalHarga = jumlahBarang * hargaSatuan;

    cout << "-----------------------------------" << endl;
    cout << "Total Harga : Rp. " << fixed << setprecision(0) << totalHarga << endl;

    cout << "Bayar : Rp. ";
    cin >> bayar;

    kembali = bayar - totalHarga;

    cout << "Kembali : Rp. " << kembali << endl;

    cout << "***************************************************" << endl;

    return 0;
}
