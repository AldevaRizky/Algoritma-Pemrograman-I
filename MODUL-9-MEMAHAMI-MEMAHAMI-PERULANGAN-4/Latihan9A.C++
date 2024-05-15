#include <iostream>
using namespace std;

int main() {
    int bil = 2;

    cout << "bilangan genap antara 1-15 adalah" << endl;
    
    do {
        cout << bil << " ";
        bil += 2;
    } while (bil <= 15);

    return 0;
}
