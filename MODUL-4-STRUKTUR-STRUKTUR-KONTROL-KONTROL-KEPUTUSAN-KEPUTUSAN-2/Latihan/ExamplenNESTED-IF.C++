#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    float penghasilan, jasa=0, komisi=0, total=0;
    
    cout << "Pendapatan Hari ini Rp. ";
    cin >> penghasilan;
    
    if (penghasilan >= 0 && penghasilan <= 200000) {
        jasa = 10000;
        komisi = 0.1 * penghasilan;
    } else {
        if (penghasilan <= 500000) {
            jasa = 20000;
            komisi = 0.15 * penghasilan;
        } else {
            jasa = 30000;
            komisi = 0.2 * penghasilan;
        }
    }
    
    // Menghitung total
    total = komisi + jasa;
    
    cout << "Uang Jasa Rp. " << jasa << endl;
    cout << "Uang Komisi Rp. " << komisi << endl;
    cout << "====================" << endl;
    cout << "Hasil Total Rp. " << total << endl;
    
    getch(); // Menggunakan getch() untuk menahan layar agar hasil tetap terlihat
    return 0;
}
