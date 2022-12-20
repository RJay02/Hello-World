#include <iostream>
using namespace std;

int main() {
    int array[11];
    for (int i = 1; i < 11; i++) {
        cout << "Enter value " << i << " please:";
        cin >> array[i];
    }
    for (int i = 1; i < 11; i++) {
        cout << array[i] << endl;
    }
    return 0;
}
