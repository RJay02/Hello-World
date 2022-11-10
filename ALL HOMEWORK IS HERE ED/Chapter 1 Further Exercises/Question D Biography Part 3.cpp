#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);

    string age;
    cout << "Please enter your age: ";
    cin >> age;

    string hometown;
    cout << "Please enter your hometown: ";
    cin >> hometown;
    cout << "My name is " << name << "." << "\nI am " << age << " years old." << "\nMy hometown is " << hometown << ".";
    return 0;
}