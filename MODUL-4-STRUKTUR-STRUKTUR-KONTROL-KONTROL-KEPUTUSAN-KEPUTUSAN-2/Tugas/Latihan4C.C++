#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menentukan range nilai berdasarkan rata-rata
string tentukanRangeNilai(double rataNilai) {
    if (rataNilai >= 90 && rataNilai <= 100) {
        return "A";
    } else if (rataNilai >= 85 && rataNilai <= 89) {
        return "AB";
    } else if (rataNilai >= 76 && rataNilai <= 84) {
        return "B";
    } else if (rataNilai >= 68 && rataNilai <= 74) {
        return "BC";
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
    double nilai1, nilai2, nilai3, nilai4, nilai5;
    
    // Meminta input dari pengguna
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    
    cout << "Masukkan Nilai 1: ";
    cin >> nilai1;
    
    cout << "Masukkan Nilai 2: ";
    cin >> nilai2;
    
    cout << "Masukkan Nilai 3: ";
    cin >> nilai3;
    
    cout << "Masukkan Nilai 4: ";
    cin >> nilai4;
    
    cout << "Masukkan Nilai 5: ";
    cin >> nilai5;
    
    // Menghitung total nilai
    double totalNilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5;
    
    // Menghitung rata-rata nilai
    double rataNilai = totalNilai / 5;
    
    // Menampilkan total nilai dan rata-rata
    cout << "Total Nilai: " << totalNilai << endl;
    cout << "Rata-rata Nilai: " << rataNilai << endl;
    
    // Menentukan range nilai berdasarkan rata-rata
    string rangeNilai = tentukanRangeNilai(rataNilai);
    cout << "Range Nilai: " << rangeNilai << endl;
    
    return 0;
}
