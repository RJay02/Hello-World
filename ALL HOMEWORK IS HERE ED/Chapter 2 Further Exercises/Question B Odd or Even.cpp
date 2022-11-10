#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x % 2 == 0) {
        cout << "The number entered " << x << " is even.";
    }
    else {
        cout << "The number entered " << x << " is odd.";
    }
    return 0;
}
