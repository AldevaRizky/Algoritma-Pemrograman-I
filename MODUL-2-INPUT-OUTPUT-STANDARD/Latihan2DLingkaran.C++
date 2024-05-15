#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, length, width, areaCircle, areaRectangle, totalArea;

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

    // Menghitung total luas gambar yang diarsir
    totalArea = areaCircle + areaRectangle;

    // Menampilkan hasil
    cout << "Luas gambar yang diarsir: " << totalArea << endl;

    return 0;
}
