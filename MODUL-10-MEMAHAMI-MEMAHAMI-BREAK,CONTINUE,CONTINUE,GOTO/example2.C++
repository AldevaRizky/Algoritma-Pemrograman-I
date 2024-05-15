#include <stdio.h>
#include <stdlib.h> 

int main() {
    int bil;
    for (bil = 1; bil <= 10; ++bil) {
        if (bil == 6)
            continue;
        printf(" %d ", bil);
    }

    #ifdef _WIN32
        system("cls"); 
    #else
        system("clear"); 
    #endif

    return 0;
}
