#include <iostream>
using namespace std;

int main() {
    int bilangan;

    // Meminta pengguna untuk memasukkan bilangan
    cout << "Input Bilangan: ";
    cin >> bilangan;

    // Menentukan apakah bilangan genap dan positif, ganjil, atau positif, atau bilangan negatif
    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            cout << "Bilangan genap dan positif" << endl;
        } else {
            cout << "Bilangan ganjil dan positif" << endl;
        }
    } else if (bilangan < 0) {
        cout << "Bilangan negatif" << endl;
    } else {
        cout << "Bilangan nol" << endl;
    }

    return 0;
}
