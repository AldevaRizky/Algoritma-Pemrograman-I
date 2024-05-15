#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, base, height, areaCircle, areaParallelogram, areaColored;

    // Meminta pengguna untuk memasukkan jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;

    // Meminta pengguna untuk memasukkan alas dan tinggi jajar genjang
    cout << "Masukkan alas jajar genjang: ";
    cin >> base;

    cout << "Masukkan tinggi jajar genjang: ";
    cin >> height;

    // Menghitung luas lingkaran
    areaCircle = PI * pow(radius, 2);

    // Menghitung luas jajar genjang
    areaParallelogram = base * height;

    // Menghitung luas gambar yang diarsir
    areaColored = areaCircle - areaParallelogram;

    // Menampilkan hasil
    cout << "Luas gambar yang diarsir: " << areaColored << endl;

    return 0;
}
