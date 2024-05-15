#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    a = 7.5;
    b = 8.4;
    c = 0; // Saya menambahkan titik koma di sini untuk mengakhiri pernyataan

    cout << "Masukkan Nilai A : " << a << endl;
    cout << "Masukkan Nilai B : " << b << endl;
    
    c = a + b;
    
    cout << "Masukkan Nilai C : " << c << endl;

    // cin.get() untuk menunggu hingga pengguna menekan tombol sebelum menutup konsol
    cin.get();

    return 0;
}
