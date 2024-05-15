#include <iostream>
using namespace std;

int main() {
    double sideLength, base, height, areaSquare, areaTriangle, areaColored;

    // Meminta pengguna untuk memasukkan panjang sisi persegi
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sideLength;

    // Meminta pengguna untuk memasukkan panjang alas segitiga
    cout << "Masukkan panjang alas segitiga: ";
    cin >> base;

    // Meminta pengguna untuk memasukkan tinggi segitiga
    cout << "Masukkan tinggi segitiga: ";
    cin >> height;

    // Menghitung luas persegi
    areaSquare = sideLength * sideLength;

    // Menghitung luas segitiga
    areaTriangle = 0.5 * base * height;

    // Menghitung luas gambar yang diarsir
    areaColored = areaSquare - areaTriangle;

    // Menampilkan hasil
    cout << "Luas gambar yang diarsir: " << areaColored << endl;

    return 0;
}
