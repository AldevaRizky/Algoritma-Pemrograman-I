#include <iostream>
using namespace std;

int main() {
    string no_rek, nama_nasabah, alamat_nasabah, jenis_kredit;
    double dana, cicilan_pertama, cicilan_kedua;

    cout << "**************************************************" << endl;
    cout << "Penerimaan Angsuran Nasabah" << endl;
    cout << "**************************************************" << endl;

    cout << "No Rek\t\t: ";
    getline(cin, no_rek);
    cout << "Nama nasabah\t: ";
    getline(cin, nama_nasabah);
    cout << "Alamat nasabah\t: ";
    getline(cin, alamat_nasabah);
    cout << "Jenis Kredit\t: ";
    getline(cin, jenis_kredit);
    cout << "Dana\t\t: Rp. ";
    cin >> dana;
    cout << "Cicilan Pertama\t: Rp. ";
    cin >> cicilan_pertama;
    cout << "Cicilan Kedua\t: Rp. ";
    cin >> cicilan_kedua;

    double tunggakan = dana - cicilan_pertama - cicilan_kedua;

    cout << "**************************************************" << endl;
    cout << "No Rek\t\t: " << no_rek << endl;
    cout << "Nama nasabah\t: " << nama_nasabah << endl;
    cout << "Alamat nasabah\t: " << alamat_nasabah << endl;
    cout << "Jenis Kredit\t: " << jenis_kredit << endl;
    cout << "Dana\t\t: Rp. " << dana << endl;
    cout << "Cicilan Pertama\t: Rp. " << cicilan_pertama << endl;
    cout << "Cicilan Kedua\t: Rp. " << cicilan_kedua << endl;
    cout << "Tunggakan\t: Rp. " << tunggakan << endl;
    cout << "**************************************************" << endl;

    return 0;
}
