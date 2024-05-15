#include <stdio.h>
#include <stdlib.h> 

int main() {
    int bil = 1;
    do {
        if (bil >= 6)
            break;
        printf(" %d ", bil);
    } while(bil++);

    #ifdef _WIN32
        system("cls"); 
    #else
        system("clear"); 
    #endif

    return 0;
}
