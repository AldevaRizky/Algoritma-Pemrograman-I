#include <stdio.h>

int main(void) {
    int a; // tipe integer (bilangan bulat)
    float b; // tipe float (bilangan real)
    char c; // tipe karakter
    // tipe string, pendeklarasiannya
    // harus langsung diinisialisasi
    char d[10] = "Algoritma"; // Diubah kutipannya menjadi "
    // inisialisasi variabel
    a = 2;
    b = 4.5;
    c = 'A'; // Diubah kutipannya menjadi '
    /*
    * menampilkan isi variabel ke konsol
    * perhatikan untuk aturan pemformatannya
    * %d untuk integer, %f untuk float, %c untuk char, %s untuk string
    */
    printf("a = %d\n", a); // Diubah kutipannya menjadi "
    printf("b = %f\n", b); // Diubah kutipannya menjadi "
    printf("c = %c\n", c); // Diubah kutipannya menjadi '
    printf("d = %s\n", d); // Diubah kutipannya menjadi "
    // boleh menambahkan baris berikut ini
    // di setiap akhir main
    return 0;
}
