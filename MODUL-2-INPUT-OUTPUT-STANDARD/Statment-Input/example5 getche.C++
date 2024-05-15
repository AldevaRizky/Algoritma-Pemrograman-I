#include <stdio.h>

int main() {
    char kar;
    printf("Masukkan Sebuah Karakter Bebas = ");
    kar = getchar();
    printf("\nTadi Anda Memasukkan karakter %c", kar);
    getchar(); // Menunggu hingga tombol Enter ditekan sebelum menutup
    return 0;
}
