#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int a;
    system("clear");
    for (a = 1; a <= 10; ++a)
        cout << a << " ";
    cout << endl << "Press Enter to continue...";
    cin.get(); 
    return 0;
}
