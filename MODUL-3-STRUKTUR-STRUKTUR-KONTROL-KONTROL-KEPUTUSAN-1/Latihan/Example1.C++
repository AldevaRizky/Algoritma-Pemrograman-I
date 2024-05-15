#include <iostream>

using namespace std;

int main() {
    double tot_beli, diskon=0, jum_bayar=0;
    
    cout << "Total Pembelian Rp. ";
    cin >> tot_beli;
    
    if (tot_beli >= 50000)
        diskon = 0.2 * tot_beli;
    
    cout << "Besarnya Diskon Rp. " << diskon << endl;
    
    jum_bayar = tot_beli - diskon;
    
    cout << "Jumlah yang harus dibayarkan Rp. " << jum_bayar;

    cin.get(); // Menggunakan cin.get() untuk menahan layar agar hasil tetap terlihat
    return 0;
}
