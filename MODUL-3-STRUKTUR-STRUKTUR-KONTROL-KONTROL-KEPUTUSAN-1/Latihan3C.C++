#include <iostream>
using namespace std;

int main() {
    double harga_barang, discount, harga_bersih;

    // Meminta pengguna untuk memasukkan harga barang dan diskon
    cout << "Masukkan harga barang = Rp. ";
    cin >> harga_barang;

    cout << "Masukkan discount = ";
    cin >> discount;

    // Menghitung harga bersih setelah diskon
    double besar_diskon = (discount / 100) * harga_barang;
    harga_bersih = harga_barang - besar_diskon;

    // Menampilkan hasil
    cout << "---------------------------------------------------------------" << endl;
    cout << "Harga barang = Rp. " << harga_barang << endl;
    cout << "Besar diskon = Rp. " << besar_diskon << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Harga bersih = Rp. " << harga_bersih << endl;
    cout << "----------------------------------------------------------" << endl;

    return 0;
}
