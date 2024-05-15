#include <iostream>
using namespace std;

int main() {
    cout << "**************************************************" << endl;
    cout << "Penerimaan Angsuran Nasabah" << endl;
    cout << "**************************************************" << endl;

    string nama_nasabah, alamat_nasabah;
    int jumlah_barang;
    double harga_per_barang, diskon;

    cout << "Nama nasabah\t: ";
    getline(cin, nama_nasabah);
    cout << "Alamat nasabah\t: ";
    getline(cin, alamat_nasabah);
    cout << "Jumlah barang\t: ";
    cin >> jumlah_barang;
    cout << "Harga per barang: Rp. ";
    cin >> harga_per_barang;
    cout << "Diskon\t\t: ";
    cin >> diskon;

    double total_harga = jumlah_barang * harga_per_barang;
    double total_diskon = (diskon / 100) * total_harga;
    double total_bayar = total_harga - total_diskon;

    cout << "**************************************************" << endl;
    cout << "Nota 1" << endl;
    cout << "Nama nasabah\t: " << nama_nasabah << endl;
    cout << "Alamat nasabah\t: " << alamat_nasabah << endl;
    cout << "Jumlah barang\t: " << jumlah_barang << " Harga : Rp. " << harga_per_barang << endl;
    cout << "Diskon\t\t: Rp. " << total_diskon << " (" << diskon << "%)" << endl;
    cout << "Total\t\t: Rp. " << total_harga << endl;
    cout << "Total Diskon\t: Rp. " << total_diskon << endl;
    cout << "Total Bayar\t: Rp. " << total_bayar << endl;
    cout << "**************************************************" << endl;

    return 0;
}
