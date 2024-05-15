#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h> // Hanya digunakan untuk getch()

using namespace std;

int main() {
    char pil, nb[10], ket[20], jwb;
    float kode, h, biaya, jb, total;

    lagi:
    system("clear"); // Menggunakan "clear" untuk membersihkan layar pada Linux/MacOS
    cout << "TOKO BUNGA LESTARI" << endl;
    cout << "1. Melati Rp. 35000/ Bungkus" << endl;
    cout << "2. Mawar Rp. 25000/ Tangkai" << endl;
    cout << "3. Tulip Rp. 45000/ Tangkai" << endl;
    cout << "Pilih Kode Bunga : ";
    cin >> kode;
    cout << endl;
    cout << "Pilih Jenis Pengiriman" << endl;
    cout << "A. Diantar" << endl;
    cout << "B. Tidak Diantar" << endl;
    cout << "Pilihan Anda : ";
    cin >> pil;

    switch ((int)kode) {
        case 1:
            strcpy(nb, "Melati");
            h = 35000;
            break;
        case 2:
            strcpy(nb, "Mawar");
            h = 25000;
            break;
        default:
            strcpy(nb, "Tulip");
            h = 45000;
            break;
    }

    if (pil == 'A' || pil == 'a') {
        strcpy(ket, "Diantar");
        biaya = 10000;
    } else {
        strcpy(ket, "Tidak Diantar");
        biaya = 0;
    }

    cout << "Jumlah Beli : ";
    cin >> jb;
    total = (jb * h) + biaya;

    system("clear"); // Menggunakan "clear" untuk membersihkan layar pada Linux/MacOS
    cout << "STRUK PEMBAYARAN" << endl;
    cout << endl;
    cout << "Kode Bunga yang dipilih: " << kode << endl;
    cout << "Nama Bunga : " << nb << endl;
    cout << "Harga : Rp. " << h << endl;
    cout << "Jenis Pengiriman anda : " << ket << endl;
    cout << "Biaya Kirim : Rp. " << biaya << endl;
    cout << "Jumlah Beli : Rp. " << jb << endl;
    cout << "====================================" << endl;
    printf("Total Pembayaran : Rp. %2.2f\n", total);
    cout << "====================================" << endl;
    cout << "Input Data Lagi [Y/T] : ";
    jwb = getch();
    if (jwb == 'Y' || jwb == 'y')
        goto lagi;
    else
        goto keluar;

    keluar:
    return 0;
}
