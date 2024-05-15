#include <iostream>
#include <string>

using namespace std;

int main() {
    int kode_hari;

    cout << "Menentukan Hari" << endl;
    cout << "1 = SENIN\t3 = RABU\t5 = JUM'AT\t7 = MINGGU" << endl;
    cout << "2 = SELASA\t4 = KAMIS\t6 = SABTU" << endl;
    cout << "Masukkan kode hari (1..7) : ";
    cin >> kode_hari;

    switch (kode_hari) {
        case 1:
            cout << "Hari SENIN" << endl;
            break;
        case 2:
            cout << "Hari SELASA" << endl;
            break;
        case 3:
            cout << "Hari RABU" << endl;
            break;
        case 4:
            cout << "Hari KAMIS" << endl;
            break;
        case 5:
            cout << "Hari JUM'AT" << endl;
            break;
        case 6:
            cout << "Hari SABTU" << endl;
            break;
        case 7:
            cout << "Hari MINGGU" << endl;
            break;
        default:
            cout << "Kode hari tidak valid!" << endl;
    }

    return 0;
}
