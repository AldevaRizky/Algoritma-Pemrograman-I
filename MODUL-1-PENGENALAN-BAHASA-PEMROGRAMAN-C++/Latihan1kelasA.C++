#include <iostream>
using namespace std;

int main() {
    // Mendefinisikan variabel-variabel
    int a = 15, b = 25, c = 12;
    float rata_rata;

    // Menampilkan nilai dari variabel a, b, dan c
    cout << "Nilai dari a: " << a << endl;
    cout << "Nilai dari b: " << b << endl;
    cout << "Nilai dari c: " << c << endl;

    // Menghitung rata-rata
    rata_rata = (a + b + c) / 3.0;

    // Menampilkan hasil rata-rata
    cout << "Rata-rata dari bilangan a, b, dan c adalah: " << rata_rata << endl;

    return 0;
}
