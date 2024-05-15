#include <iostream>
#include <string>

using namespace std;

int main() {
    int kode_bulan;

    cout << "Masukkan kode Bulan (1..12) : ";
    cin >> kode_bulan;

    switch (kode_bulan) {
        case 1:
            cout << "Bulan Januari" << endl;
            break;
        case 2:
            cout << "Bulan Februari" << endl;
            break;
        case 3:
            cout << "Bulan Maret" << endl;
            break;
        case 4:
            cout << "Bulan April" << endl;
            break;
        case 5:
            cout << "Bulan Mei" << endl;
            break;
        case 6:
            cout << "Bulan Juni" << endl;
            break;
        case 7:
            cout << "Bulan Juli" << endl;
            break;
        case 8:
            cout << "Bulan Agustus" << endl;
            break;
        case 9:
            cout << "Bulan September" << endl;
            break;
        case 10:
            cout << "Bulan Oktober" << endl;
            break;
        case 11:
            cout << "Bulan November" << endl;
            break;
        case 12:
            cout << "Bulan Desember" << endl;
            break;
        default:
            cout << "Kode bulan tidak valid!" << endl;
    }

    return 0;
}
