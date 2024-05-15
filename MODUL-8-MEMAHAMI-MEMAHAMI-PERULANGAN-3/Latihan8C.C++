#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "==============================" << endl;
    cout << "Latihan Perulangan C++ dengan While" << endl;
    cout << "==============================" << endl;
    cout << "1. Menampilkan deret angka 1 sampai 10" << endl;
    cout << "2. Menampilkan deret bilangan ganjil dari 1 sampai 10" << endl;

    cout << "Pilih menu (1/2): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Deret angka 1 sampai 10: ";
            int i = 0;
            while (i <= 10) {
                cout << i;
                i++;
            }
            cout << endl;
            break;
        }
        case 2: {
            cout << "Deret bilangan ganjil dari 1 sampai 10: ";
            int j = 1;
            while (j <= 10) {
                cout << j;
                j += 2;
            }
            cout << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}
