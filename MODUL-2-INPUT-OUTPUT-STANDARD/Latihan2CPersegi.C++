#include <iostream>
using namespace std;

int main() {
    float sisi_persegi, alas_segitiga, tinggi_segitiga;

    // Meminta pengguna untuk memasukkan panjang sisi persegi dan alas serta tinggi segitiga
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi_persegi;

    cout << "Masukkan alas segitiga: ";
    cin >> alas_segitiga;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi_segitiga;

    // Menghitung luas persegi
    float luas_persegi = sisi_persegi * sisi_persegi;

    // Menghitung luas segitiga
    float luas_segitiga = 0.5 * alas_segitiga * tinggi_segitiga;

    // Menghitung luas gambar yang tidak diarsir
    float luas_tidak_diarsir = luas_persegi - luas_segitiga;

    // Menampilkan hasil
    cout << "Luas gambar yang tidak diarsir (luas persegi dikurangi luas segitiga): " << luas_tidak_diarsir << endl;

    return 0;
}
