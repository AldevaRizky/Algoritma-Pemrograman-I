#include <stdio.h>

int main() {
    int a, b, c = 0 ;
    printf("Masukkan Nilai A = ");
    scanf("%d", &a);
    printf("Masukkan Nilai B = ");
    scanf("%d", &b);
    c = a + b;
    printf("Hasil Penjumlahan = %d\n", c);
    printf("Tekan Enter untuk melanjutkan...");
    getchar(); // Menunggu sampai tombol Enter ditekan
    return 0;
}
