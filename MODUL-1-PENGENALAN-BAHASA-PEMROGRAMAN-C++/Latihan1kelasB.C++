#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;

    // Meminta pengguna untuk memasukkan tiga bilangan
    cout << "Input Bilangan-1: ";
    cin >> bilangan1;

    cout << "Input Bilangan-2: ";
    cin >> bilangan2;

    cout << "Input Bilangan-3: ";
    cin >> bilangan3;

    // Mencari bilangan terbesar
    int terbesar = bilangan1;

    if (bilangan2 > terbesar) {
        terbesar = bilangan2;
    }

    if (bilangan3 > terbesar) {
        terbesar = bilangan3;
    }

    // Mencetak hasil
    cout << "JADI BILANGAN TERBESAR adalah: BILANGAN ";
    if (terbesar == bilangan1) {
        cout << "1";
    } else if (terbesar == bilangan2) {
        cout << "2";
    } else {
        cout << "3";
    }
    cout << " yaitu " << terbesar << endl;

    return 0;
}
