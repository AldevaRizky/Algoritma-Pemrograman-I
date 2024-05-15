#include <iostream>
using namespace std;

int main() {
    int a, b;
    char lagi;

    do {
        system("clear"); // membersihkan layar di lingkungan Unix/Linux, gunakan "cls" untuk lingkungan Windows

        cout << "Masukkan Bilangan = ";
        cin >> a;
        b = a % 2;
        
        cout << "Nilai " << a << " % 2 adalah = " << b << endl;

        cout << "\n\nIngin Hitung Lagi [Y/T] : ";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}
