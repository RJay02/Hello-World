#include <iostream>
using namespace std;

int main() {
    while (true) {
        int num;
        cout << "Please enter a number other than 5:" << endl;
        cin >> num;
        if (num == 5) {
            cout << "Hey! you weren't supposed to enter 5!" << endl;
            break;
        }
    }
}