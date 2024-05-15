#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int i;
    system("clear"); 

    i = 0;
    while (i < 10) {
        cout << "C++" << endl;
        i++;
    }

    cout << "Tekan Enter untuk melanjutkan...";
    cin.ignore(); 
    return 0;
}
