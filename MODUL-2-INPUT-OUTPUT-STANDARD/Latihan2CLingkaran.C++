#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, length, width, areaCircle, areaRectangle, areaUncolored;

    // Meminta pengguna untuk memasukkan jari-jari lingkaran dan panjang serta lebar persegi panjang
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> length;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> width;

    // Menghitung luas lingkaran
    areaCircle = PI * pow(radius, 2);

    // Menghitung luas persegi panjang
    areaRectangle = length * width;

    // Menghitung luas gambar yang tidak diarsir
    areaUncolored = areaCircle - areaRectangle;

    // Menampilkan hasil
    cout << "Luas gambar yang tidak diarsir: " << areaUncolored << endl;

    return 0;
}
