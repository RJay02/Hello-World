#include <iostream>
using namespace std;

int main() {
    //Check if user enters valid input
    cout << "Enter your age:";
    int age;
    cin >> age;
    while (cin.fail()) {
        cout << "Invalid input" << endl;
        cin.clear(); //clear bad input flag
        cin.ignore(1000, '\n'); //ignore input
        cout << "Enter a valid age:";
        cin >> age; //get number again
    }
    cout << "The entered age is:" << age << endl;

    return 0;
}