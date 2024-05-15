#include <iostream>
using namespace std;

int main() {
    cout << "*****************************************************************" << endl;
    cout << "Penerimaan Mahasiswa Baru UNIPMA" << endl;
    cout << "*****************************************************************" << endl;

    string nim, nama_mahasiswa, alamat_mahasiswa, belajar;
    double biaya_belajar, cicilan_pertama, cicilan_kedua, tunggakan;

    cout << "Nim\t\t: ";
    getline(cin, nim);
    cout << "Nama mahasiswa\t: ";
    getline(cin, nama_mahasiswa);
    cout << "Alamat mahasiswa: ";
    getline(cin, alamat_mahasiswa);
    cout << "Belajar\t\t: ";
    getline(cin, belajar);
    cout << "Biaya Belajar\t: Rp. ";
    cin >> biaya_belajar;
    cout << "Cicilan Pertama: Rp. ";
    cin >> cicilan_pertama;
    cout << "Cicilan Kedua\t: Rp. ";
    cin >> cicilan_kedua;
    // Menghitung tunggakan
    tunggakan = biaya_belajar - cicilan_pertama - cicilan_kedua;

    cout << "*****************************************************************" << endl;
    cout << "Nim\t\t: " << nim << endl;
    cout << "Nama mahasiswa\t: " << nama_mahasiswa << endl;
    cout << "Alamat mahasiswa: " << alamat_mahasiswa << endl;
    cout << "Belajar\t\t: " << belajar << endl;
    cout << "Biaya Belajar\t: Rp. " << biaya_belajar << endl;
    cout << "Cicilan Pertama: Rp. " << cicilan_pertama << endl;
    cout << "Cicilan Kedua\t: Rp. " << cicilan_kedua << endl;
    cout << "Tunggakan\t: Rp. " << tunggakan << endl;
    cout << "*****************************************************************" << endl;

    return 0;
}
