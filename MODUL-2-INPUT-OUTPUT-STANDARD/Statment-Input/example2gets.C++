#include <stdio.h>

int main() {
    char nm1[20];
    char nm2[20];

    printf("Masukkan nama ke - 1 = ");
    fgets(nm1, sizeof(nm1), stdin);

    printf("Masukkan nama ke - 2 = ");
    fgets(nm2, sizeof(nm2), stdin);

    printf("\n\n");
    printf("Senang Berkenalan Dengan Anda, %s", nm1);
    printf("Senang Berkenalan Dengan Anda, %s", nm2);

    return 0;
}
