#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, place, dateBorn, address, status;

    // Meminta pengguna untuk memasukkan data biografi
    cout << "MY BIODATA" << endl;

    cout << "NAME: ";
    getline(cin, name);

    cout << "PLACE: ";
    getline(cin, place);

    cout << "DATE BORN: ";
    getline(cin, dateBorn);

    cout << "ADDRESS: ";
    getline(cin, address);

    cout << "STATUS: ";
    getline(cin, status);

    // Mencetak data biografi
    cout << "\nBIODATA:" << endl;
    cout << "NAME: " << name << endl;
    cout << "PLACE: " << place << endl;
    cout << "DATE BORN: " << dateBorn << endl;
    cout << "ADDRESS: " << address << endl;
    cout << "STATUS: " << status << endl;

    return 0;
}
