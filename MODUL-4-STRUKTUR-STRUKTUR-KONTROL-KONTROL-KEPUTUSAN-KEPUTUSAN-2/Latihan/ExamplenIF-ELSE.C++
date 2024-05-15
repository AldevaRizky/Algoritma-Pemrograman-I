#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    double tot_beli, discont=0, jum_bayar=0;
    
    cout << "Total Pembelian Rp. ";
    cin >> tot_beli;
    
    if (tot_beli >= 50000)
        discont = 0.3 * tot_beli;
    else
        discont = 0.05 * tot_beli;
    
    cout << "Besarnya Diskon Rp. " << discont << endl;
    
    jum_bayar = tot_beli - discont;
    
    cout << "Jumlah yang harus dibayarkan Rp. " << jum_bayar;
    
    getch(); // Menggunakan getch() untuk menahan layar agar hasil tetap terlihat
    return 0;
}
