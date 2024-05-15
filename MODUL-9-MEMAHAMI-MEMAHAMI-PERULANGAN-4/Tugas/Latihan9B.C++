#include <iostream>
using namespace std;

int main() {
    int nilai = 5;
    int i = 1;

    cout << "Simulasi Program" << endl;

    do {
        cout << "Nilai ke " << i << " = " << nilai << endl;
        nilai += 5;
        i++;
    } while (i <= 10);

    return 0;
}
