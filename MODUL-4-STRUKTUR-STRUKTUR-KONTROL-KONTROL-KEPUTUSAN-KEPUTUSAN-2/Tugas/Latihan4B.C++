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
    string nama, nim, kelas;
    string mataKuliah[4];
    int nilaiAngka[4];
    string nilaiHurufArr[4];
    int sks[4];
    int totalSks = 0;

    // Memasukkan data personal
    cout << "Nama : ";
    getline(cin, nama);
    
    cout << "Nim : ";
    getline(cin, nim);
    
    cout << "Kelas : ";
    getline(cin, kelas);

    // Memasukkan data nilai untuk minimal 4 mata kuliah
    for (int i = 0; i < 4; ++i) {
        cout << "MATA KULIAH " << i+1 << " : ";
        getline(cin, mataKuliah[i]);
        
        cout << "NILAI ANGKA : ";
        cin >> nilaiAngka[i];
        
        // Menentukan nilai huruf
        nilaiHurufArr[i] = nilaiHuruf(nilaiAngka[i]);
        
        cout << "SKS : ";
        cin >> sks[i];

        // Membersihkan buffer input
        cin.ignore();
    }

    // Menampilkan hasil dalam bentuk tabel
    cout << "------------------------------------------------------" << endl;
    cout << "Nama : " << nama << endl;
    cout << "Nim : " << nim << endl;
    cout << "Kelas : " << kelas << endl;
    cout << "------------------------------------------------------" << endl;
    cout << setw(12) << left << "MATA KULIAH" << "|";
    cout << setw(11) << left << "NILAI ANGKA" << "|";
    cout << setw(12) << left << "NILAI HURUF" << "|";
    cout << setw(4) << left << "SKS" << endl;
    cout << "------------------------------------------------------" << endl;

    for (int i = 0; i < 4; ++i) {
        cout << setw(12) << left << mataKuliah[i] << "|";
        cout << setw(11) << left << nilaiAngka[i] << "|";
        cout << setw(12) << left << nilaiHurufArr[i] << "|";
        cout << setw(4) << left << sks[i] << endl;
        
        // Menghitung total SKS
        totalSks += sks[i];
    }

    cout << "------------------------------------------------------" << endl;
    cout << "Total SKS\t\t\t\t\t   | " << totalSks << endl;

    return 0;
}
