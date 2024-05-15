#include <iostream>
#include <cstdlib> // Untuk menggunakan fungsi system

using namespace std;

int main() {
    system("clear"); // Membersihkan layar pada sistem operasi selain Windows
    for (int a = 10; a >= 1; --a)
        cout << a;
    cin.get(); // Menahan layar
    return 0;
}
