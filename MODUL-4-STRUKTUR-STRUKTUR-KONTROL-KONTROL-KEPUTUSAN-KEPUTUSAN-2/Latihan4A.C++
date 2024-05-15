#include <iostream>
#include <iomanip> // Untuk pengaturan lebar kolom pada tabel
using namespace std;

// Fungsi untuk menentukan nilai huruf berdasarkan nilai angka
string nilaiHuruf(int nilai) {
    if (nilai >= 85 && nilai <= 100) {
        return "A";
    } else if (nilai >= 70 && nilai <= 84) {
        return "B";
    } else if (nilai >= 50 && nilai <= 69) {
        return "C";
    } else if (nilai >= 40 && nilai <= 49) {
        return "D";
    } else if (nilai >= 0 && nilai <= 39) {
        return "E";
    } else {
        return "Tidak Valid";
    }
}

int main() {
    string nama[4], mataKuliah[4];
    int nilaiAngka[4];
    string nilaiHurufArr[4];

    // Memasukkan data nilai untuk 4 mata kuliah
    for (int i = 0; i < 4; ++i) {
        cout << "NAMA " << i+1 << " : ";
        getline(cin, nama[i]);
        
        cout << "MATA KULIAH " << i+1 << " : ";
        getline(cin, mataKuliah[i]);
        
        cout << "NILAI ANGKA " << i+1 << " : ";
        cin >> nilaiAngka[i];

        // Menentukan nilai huruf
        nilaiHurufArr[i] = nilaiHuruf(nilaiAngka[i]);

        // Membersihkan buffer input
        cin.ignore();
    }

    // Menampilkan hasil dalam bentuk tabel
    cout << "------------------------------------------------------" << endl;
    cout << "|" << setw(10) << left << "NAMA" << "|";
    cout << setw(15) << left << "MATA KULIAH" << "|";
    cout << setw(12) << left << "NILAI ANGKA" << "|";
    cout << setw(12) << left << "NILAI HURUF" << "|" << endl;
    cout << "------------------------------------------------------" << endl;

    for (int i = 0; i < 4; ++i) {
        cout << "|" << setw(10) << left << nama[i] << "|";
        cout << setw(15) << left << mataKuliah[i] << "|";
        cout << setw(12) << left << nilaiAngka[i] << "|";
        cout << setw(12) << left << nilaiHurufArr[i] << "|" << endl;
    }

    cout << "------------------------------------------------------" << endl;

    return 0;
}
