#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menentukan range nilai berdasarkan rata-rata
string tentukanRangeNilai(double rataNilai) {
    if (rataNilai >= 90 && rataNilai <= 100) {
        return "A";
    } else if (rataNilai >= 85 && rataNilai <= 89) {
        return "A-";
    } else if (rataNilai >= 76 && rataNilai <= 84) {
        return "B";
    } else if (rataNilai >= 68 && rataNilai <= 74) {
        return "B-";
    } else if (rataNilai >= 55 && rataNilai <= 67) {
        return "C";
    } else if (rataNilai >= 45 && rataNilai <= 54) {
        return "D";
    } else if (rataNilai >= 0 && rataNilai <= 44) {
        return "E";
    } else {
        return "Tidak Valid";
    }
}

int main() {
    string nim, nama;
    double nilaiTugas, nilaiKeaktifan, nilaiUTS, nilaiUAS;
    double totalNilai, rataNilai;

    // Memasukkan data nilai
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    // Menghitung total nilai
    totalNilai = (nilaiTugas * 0.2) + (nilaiKeaktifan * 0.1) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);

    // Menghitung rata-rata nilai
    rataNilai = totalNilai / 4;

    // Menampilkan rata-rata nilai dan range nilai
    cout << "Rata-rata Nilai: " << rataNilai << endl;
    cout << "Range Nilai: " << tentukanRangeNilai(rataNilai) << endl;

    return 0;
}
