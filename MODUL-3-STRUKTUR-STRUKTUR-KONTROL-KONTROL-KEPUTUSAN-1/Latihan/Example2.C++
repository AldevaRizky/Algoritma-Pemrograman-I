#include <stdio.h>
#include <conio.h>

int main(int argc, char* argv[]) {
    int x;
    printf("Masukkan sebuah bilangan = ");
    scanf("%d", &x);
    if (x % 2 != 0) {
        printf("Fakultas Teknik Jurusan Teknik Informatika");
    }
    getch(); // Menggunakan getch() untuk menahan layar agar hasil tetap terlihat
    return 0;
}
