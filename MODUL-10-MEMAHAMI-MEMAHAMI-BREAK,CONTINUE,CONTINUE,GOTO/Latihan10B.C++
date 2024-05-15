#include <iostream>
using namespace std;

int main() {
    int angka;

mulai:
    cout << "Masukkan Angka : ";
    cin >> angka;

    if (angka == 5)
        goto selesai;
    else
        goto mulai;

selesai:
    cout << "Program berhenti karena Anda memasukkan angka 5." << endl;

    return 0;
}
