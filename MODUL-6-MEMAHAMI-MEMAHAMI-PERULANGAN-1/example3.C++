#include <iostream>

using namespace std;

int main() {
    system("clear"); // Membersihkan layar pada sistem operasi selain Windows
    for (int a = 1; a <= 10; a += 2)
        cout << a;
    cin.get(); // Menahan layar
    return 0;
}
