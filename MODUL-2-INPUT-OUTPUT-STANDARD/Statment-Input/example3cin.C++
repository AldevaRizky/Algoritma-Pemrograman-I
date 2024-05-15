#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Masukkan Nilai A : ";
    cin >> a;
    cout << "Masukkan Nilai B : ";
    cin >> b;
    c = a + b;
    cout << "Hasil Penjumlahan Nilai C : " << c << endl;
    cin.get(); // Menunggu hingga tombol Enter ditekan sebelum menutup
    return 0;
}
