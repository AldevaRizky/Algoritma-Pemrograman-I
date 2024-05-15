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

    // Menentukan apakah bilangan-1 positif atau negatif
    if (bilangan1 > 0) {
        cout << "Bilangan-1: Bilangan POSITIF" << endl;
    } else if (bilangan1 < 0) {
        cout << "Bilangan-1: Bilangan NEGATIF" << endl;
    } else {
        cout << "Bilangan-1: Bilangan NOL" << endl;
    }

    // Menentukan apakah bilangan-2 positif atau negatif
    if (bilangan2 > 0) {
        cout << "Bilangan-2: Bilangan POSITIF" << endl;
    } else if (bilangan2 < 0) {
        cout << "Bilangan-2: Bilangan NEGATIF" << endl;
    } else {
        cout << "Bilangan-2: Bilangan NOL" << endl;
    }

    // Menentukan apakah bilangan-3 positif atau negatif
    if (bilangan3 > 0) {
        cout << "Bilangan-3: Bilangan POSITIF" << endl;
    } else if (bilangan3 < 0) {
        cout << "Bilangan-3: Bilangan NEGATIF" << endl;
    } else {
        cout << "Bilangan-3: Bilangan NOL" << endl;
    }

    return 0;
}
