#include <iostream>
using namespace std;

int main() {
    int banyakNilai;
    cout << "Input banyak nilai: ";
    cin >> banyakNilai;

    int nilai;
    int total = 0;
    int i = 1;

    do {
        cout << "Input Nilai " << i << " = ";
        cin >> nilai;
        total += nilai;
        i++;
    } while (i <= banyakNilai);

    double rataNilai = static_cast<double>(total) / banyakNilai;

    cout << endl;
    cout << "Total nilai = " << total << endl;
    cout << "Rata nilai = " << rataNilai << endl;

    return 0;
}
