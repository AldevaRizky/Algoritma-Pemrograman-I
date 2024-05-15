#include <iostream>

using namespace std;

int main() {
    int count = 1;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count += i;
        }
        cout << endl;
        count = i + 1;
    }
    return 0;
}
