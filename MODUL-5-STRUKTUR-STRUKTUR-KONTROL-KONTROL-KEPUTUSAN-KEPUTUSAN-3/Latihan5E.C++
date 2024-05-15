#include <iostream>

using namespace std;

int main() {
    int bulan, tahun;

    cout << "Masukkan bulan (1-12): ";
    cin >> bulan;

    switch (bulan) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Jumlah hari dalam bulan " << bulan << " adalah 31 hari.";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Jumlah hari dalam bulan " << bulan << " adalah 30 hari.";
            break;
        case 2:
            cout << "Masukkan tahun: ";
            cin >> tahun;
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
                cout << "Jumlah hari dalam bulan Februari tahun " << tahun << " adalah 29 hari.";
            else
                cout << "Jumlah hari dalam bulan Februari tahun " << tahun << " adalah 28 hari.";
            break;
        default:
            cout << "Bulan yang dimasukkan tidak valid.";
            break;
    }

    return 0;
}
