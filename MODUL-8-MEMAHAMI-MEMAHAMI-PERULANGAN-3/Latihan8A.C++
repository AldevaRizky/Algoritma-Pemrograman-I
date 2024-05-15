#include <iostream>

using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "MAIN MENU" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Edit Data" << endl;
        cout << "3. Delete Data" << endl;
        cout << "4. Exit" << endl;
        cout << "Your Choice (1/2/3/4) ? ";

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Anda memilih menu 1" << endl;
                break;
            case 2:
                cout << "Anda memilih menu 2" << endl;
                break;
            case 3:
                cout << "Anda memilih menu 3" << endl;
                break;
            case 4:
                cout << "Terima kasih, program berhenti." << endl;
                return 0; // Keluar dari program
            default:
                cout << "Pilihan tidak valid. Silakan masukkan nomor menu yang benar." << endl;
                break;
        }

        cout << "Tekan ENTER untuk kembali ke menu utama...";
        cin.ignore(); // Menunggu sampai Enter ditekan
        cin.get();    // Menunggu sampai Enter ditekan lagi
    }

    return 0;
}
