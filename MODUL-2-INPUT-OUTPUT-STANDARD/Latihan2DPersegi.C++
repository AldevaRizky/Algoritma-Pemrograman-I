#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double sideLength, radius, areaSquare, areaCircle, areaColored;

    // Meminta pengguna untuk memasukkan panjang sisi persegi
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sideLength;

    // Meminta pengguna untuk memasukkan jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;

    // Menghitung luas persegi
    areaSquare = sideLength * sideLength;

    // Menghitung luas lingkaran
    areaCircle = PI * pow(radius, 2);

    // Menghitung luas gambar yang diarsir
    areaColored = areaSquare - areaCircle;

    // Menampilkan hasil
    cout << "Luas gambar yang diarsir: " << areaColored << endl;

    return 0;
}
